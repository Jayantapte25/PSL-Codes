#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {3,5,7,2,9,1}, sum,k;

    for(int i=0; i<6; i++)
    {
        k=i;
        while(k>=0 && a[k]>a[k+1])
        {
            swap(a[k],a[k+1]);
            k--;
        }
    }
    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
}