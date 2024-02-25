//Code for sorting array of 0,1,2 without using any sorting algo

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}