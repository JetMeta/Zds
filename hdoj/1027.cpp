/* 1-n全排列，输出第m小的*/

#include <stdio.h>
#include <iostream>

using namespace std;

long long factorial(int n)
{
    long long result = 1;
    const int upper = n+1;
    for (int i = 2; i < upper; ++i)
    {
        result *= i;
    }

    return result;
}

void next_permutation(int* arr, int length)
{
    int a = -1, b = -1;
    int min_ = 1001;

    for (int i = length - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            a = i;
            break;
        }
    }

    if (a == -1) return;

    for (int i = a + 1; i < length; i++)
    {
        if (arr[i] > arr[a] && arr[i] < min_)
        {
            b = i;
            min_ = arr[i];
        }
    }

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

    for (int i = a + 1; i <= (a + length - 1)/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a + length - i];
        arr[a + length - i] = temp;
    }
}

int main()
{
    int m = 0;
    int n = 0;
    int arr[1000] = {0};
    int idx = 0;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        idx = 0;
        for(int i = 0 ; i < n; ++i)
        {
            arr[i] = i + 1;
        }

        for(long long i = 0 ; ; ++i)
        {
            if(idx == (m-1))
            {
                for(int j = 0; j < n ; ++j)
                {
                    cout << arr[j];

                    if(j != n - 1)
                    {
                        cout << " ";
                    }
                }
                cout << endl;
                break;
            }

            ++idx;
            next_permutation(arr, n);
        }
    }
}
