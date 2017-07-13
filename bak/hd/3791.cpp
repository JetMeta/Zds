#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stack>

using namespace std;

typedef int ElementType;

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree MakeEmpty( SearchTree T );
SearchTree MakeEmpty2( SearchTree* T );
Position Find( ElementType X, SearchTree T );
Position FindMin( SearchTree T );
Position FindMax( SearchTree T );
SearchTree Insert( ElementType X, SearchTree T );
SearchTree Delete( ElementType X, SearchTree T );
ElementType Retrieve( Position P );

struct TreeNode
{
    ElementType Element;
    SearchTree  Left;
    SearchTree  Right;
};

SearchTree MakeEmpty( SearchTree T )
{
    if( T != NULL )
    {
        MakeEmpty( T->Left );
        MakeEmpty( T->Right );
        free( T );
        T =NULL;
    }

    return NULL;
}

SearchTree MakeEmpty2( SearchTree* T )
{
    if (*T !=NULL)
    {
        MakeEmpty2(&((*T)->Left));
        MakeEmpty2(&((*T)->Right));
        free(*T);
        *T = NULL;
    }

    return NULL;
}

Position Find( ElementType X, SearchTree T )
{
    if( T == NULL )
        return NULL;
    if( X < T->Element )
        return Find( X, T->Left );
    else if( X > T->Element )
        return Find( X, T->Right );
    else
        return T;
}

Position FindMin( SearchTree T )
{
    if( T == NULL )
        return NULL;
    else if( T->Left == NULL )
        return T;
    else
        return FindMin( T->Left );
}

Position FindMax( SearchTree T )
{
    if( T != NULL )
        while( T->Right != NULL )
            T = T->Right;

    return T;
}

SearchTree Insert2( ElementType X, SearchTree* T)
{
    if( *T == NULL )
    {
        *T = (SearchTree)malloc( sizeof( struct TreeNode) );
        (*T)->Element = X;
        (*T)->Left = (*T)->Right = NULL;
    }
    else if( X < (*T)->Element )
        (*T)->Left = Insert2( X, &((*T)->Left) );
    else if( X > (*T)->Element )
        (*T)->Right = Insert2( X, &((*T)->Right) );

    return *T;
}

SearchTree Insert( ElementType X, SearchTree T)
{
    if( T == NULL )
    {
        T = (SearchTree)malloc( sizeof( struct TreeNode ) );
        T->Element = X;
        T->Left = T->Right = NULL;
    }
    else if( X < T->Element )
        T->Left = Insert( X, T->Left );
    else if( X > T->Element )
        T->Right = Insert( X, T->Right );

    return T;
}

SearchTree Delete( ElementType X, SearchTree T )
{
    Position TmpCell;

    if( T == NULL );
    //Error( "Element not found" );
    else if( X < T->Element ) /* Go left */
        T->Left = Delete( X, T->Left );
    else if( X > T->Element ) /* Go right */
        T->Right = Delete( X, T->Right );
    else  /* Found element to be deleted */
        if( T->Left && T->Right )  /* Two children */
        {
            /* Replace with smallest in right subtree */
            TmpCell = FindMin( T->Right );
            T->Element = TmpCell->Element;
            T->Right = Delete( T->Element, T->Right );
        }
        else  /* One or zero children */
        {
            TmpCell = T;
            if( T->Left == NULL ) /* Also handles 0 children */
                T = T->Right;
            else if( T->Right == NULL )
                T = T->Left;
            free( TmpCell );
        }

    return T;
}

ElementType Retrieve( Position P )
{
    return P->Element;
}

SearchTree st1 = NULL;
SearchTree st2 = NULL;
int index = 0;
char sza[10] = {'\0'};
char szb[10] = {'\0'};

void buildTree(SearchTree* st,char* sz)
{
    int i = 0;
    int len = strlen(sz);

    for (i = 0 ; i < len ; ++i)
    {
        Insert2(sz[i] - '0',st);
    }
}

void visitTree(SearchTree st,char* sz)
{
    SearchTree pNode;
    index = 0;

    stack<SearchTree> ss;

    if (st!=NULL)
    {
        ss.push(st);
    }

    while(!ss.empty())
    {
        pNode = ss.top();
        sz[index++] = pNode->Element + '0';
        ss.pop();
        if (pNode->Left!=NULL)
        {
            ss.push(pNode->Left);
        }
        if (pNode->Right!=NULL)
        {
            ss.push(pNode->Right);
        }
    }
}

int main()
{
    int i = 0;
    int n;
    char sz1[10] = {'\0'};
    char sz2[10] = {'\0'};

    while(scanf("%d",&n)!=EOF&&(n!=0))
    {
        scanf("%s",sz1);
        buildTree(&st1,sz1);
        index = 0;
        memset(sza,'\0',sizeof(sza));
        visitTree(st1,sza);

        while(n--)
        {
            scanf("%s",sz2);
            buildTree(&st2,sz2);
            index = 0;
            memset(szb,'\0',sizeof(szb));
            visitTree(st2,szb);

            if (strcmp(sza,szb) == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }

            MakeEmpty2(&st2);

        }

        MakeEmpty2(&st1);
    }

    return 0;
}
