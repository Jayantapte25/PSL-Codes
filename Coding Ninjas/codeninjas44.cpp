//Next Smaller Element in array if not -1

#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int k=1;
    for(int i=0; i<n; i++)
    {
        int g=a[i]-1;
        int k=1;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]==g)
            {
                a[i]=g;
                k=0;
            }           
        }
        if(k==1)
        {
            a[i]=-1;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}