//ceil the floor

#include <iostream>
using namespace std;

int main()
{
    int n, a[100],x,min=1000000,max=-1000000;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the number to be searched: ";
    cin>>x;

    for(int i=0; i<n; i++)
    {
        if(a[i]>max && a[i]<=x)
        {
            max=a[i];
        }
        if(a[i]<min && a[i]>=x)
        {
            min=a[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}