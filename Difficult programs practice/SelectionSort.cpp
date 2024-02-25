#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 5, 4, 3};
    int n = 5,sum=0;
    for(int i=0; i<n; i++)
    {
        int sum=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[sum])
            {
                sum=j;
            }
        }
        swap(a[i],a[sum]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

