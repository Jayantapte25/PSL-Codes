//code to shift the elements of an array to the right from a given position

#include <iostream>
using namespace std;

// 1 4 5 6 7 7 6
int main()
{
    int n,a[100],p;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"position ";
    cin>>p;
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(i>p)
        {
            for(int j=n-1; j>p; j--)
            {
                cout<<a[j]<<" ";
            }
            return 0;
        }
        cout<<a[i]<<" ";
    }

}