#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct _student
{
    string strName;
    string strIn;
    string strOut;
} student;

typedef vector<student> vs;
typedef vector<student>::iterator vsi;

class compIn
{
public:
    bool operator()(student st1,student st2)
    {
        return st1.strIn < st2.strIn;
    }
};

class compOut
{
public:
    bool operator()(student st1,student st2)
    {
        return st1.strOut > st2.strOut;
    }
};

void Add(vs& myVs,const student& st)
{
    vsi myVsi;

    for (myVsi = myVs.begin(); myVsi != myVs.end(); ++myVsi)
    {
        if (myVsi->strName == st.strName)
        {
            if (myVsi->strIn > st.strIn)
            {
                myVsi->strIn = st.strIn;
            }

            if (myVsi->strOut < st.strOut)
            {
                myVsi->strOut = st.strOut;
            }

            return;
        }
    }

    myVs.push_back(st);
}

int main()
{
    int n;//z 总的测试数目
    int m;//z 每个测试中的人数
    cin >> n;

    vs myVs;
    student st;
    compIn ci;
    compOut co;

    while(n--)
    {
        cin >> m;
        myVs.clear();

        while(m--)
        {
            cin >> st.strName >> st.strIn >> st.strOut;
            Add(myVs,st);
        }

        sort(myVs.begin(),myVs.end(),ci);
        cout << myVs.begin()->strName << " ";
        sort(myVs.begin(),myVs.end(),co);
        cout << myVs.begin()->strName << endl;
    }

    return 0;
}
