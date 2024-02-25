//rotate an array by k elements

#include <iostream>
using namespace std;

int main()
{
    int n, k, a[100];
    cout <<"Enter the number";
    cin>>n;

    cout<<"Enter the array elements";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the value of k";
    cin>>k;
    int temp;
    for(int i=0; i<k; i++)
    {   
        temp = a[i];
        for(int i=0; i<n; i++)
        {
            a[i]=a[i+1];
        }
        a[n]=temp;
    }
    cout<<"The aay after rotation is";
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
}