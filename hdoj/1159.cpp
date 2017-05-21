#include<iostream>
#include<string>

using namespace std;

int lcsLength(string a,string b);

int main()
{
    string a,b;
    int len;
    while(cin>>a>>b)
    {
        len=lcsLength(a,b);
        cout<<len<<endl;
    }

    return 0;
}

int lcsLength(string a,string b)
{
    int **m;
    int i,j;

    m=new int*[a.size()+1];
    for(i=0; i<a.size()+1; i++)
        m[i]=new int[b.size()+1];
    for(i=0; i<=a.size(); i++)
        for(j=0; j<=b.size(); j++)
            m[i][j]=0;
    for(i=0; i<a.size(); i++)
    {
        for(j=0; j<b.size(); j++)
        {
            if(a[i]==b[j])
                m[i+1][j+1]=m[i][j]+1;
            else if(m[i+1][j]>m[i][j+1])
                m[i+1][j+1]=m[i+1][j];
            else
                m[i+1][j+1]=m[i][j+1];
        }
    }
    return m[a.size()][b.size()];
}
