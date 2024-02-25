//code to find the sum of all subarrays of an array

#include <iostream>
using namespace std;

int main()
{
    int a[100],s,n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    //print all subarrays of the array

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            //elements of subarray(i,j)
            for(int k=i;k<=j;k++)
            {
                cout<<a[k];
            }
            cout<<",";
        }
        cout << endl;
    }
}   