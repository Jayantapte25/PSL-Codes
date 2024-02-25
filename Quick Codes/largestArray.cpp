#include <iostream>
using namespace std;

int main()
{
    int a[100],tmp,n;

    cout<<"Enter array elements";
    cin>>n;
    int p=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(p<a[i])
        {
            p=a[i];
        }
    }
    cout<<"The largest number:"<<p<<endl;
}