//find common elements in two arrays

#include <iostream>
using namespace std;

int main()
{
    int n,a[100],b[100],m;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number of elements: ";
    cin>>m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                b[j]=-1;
                break;
            }
        }
    }
    return 0;
}