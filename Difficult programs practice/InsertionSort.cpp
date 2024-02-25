#include <iostream>
using namespace std;

int main()
{
    int k, j,a[]={4,2,6,1,7,3,1,3},n=8;
    for(int i=1; i<n; i++)
    {
        k=i;
        for(j=i-1; j>=0; j--)
        {
            if(a[k]<a[j])
            {
                swap(a[k],a[j]);
                k=j;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}