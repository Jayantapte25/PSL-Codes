// substracting the sum of elements of one part of array from the other part and checking if it is equal to k or not

#include <iostream>
using namespace std;

int main()
{
    int n, a[100],k;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the K  value: ";
    cin>>k;

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum1=0, sum2=0,u=1;
    for(int i=1; i<n; i++)
    {
        sum1=0;
        sum2=0;
        for(int j=0; j<=i; j++)
        {
            sum1=sum1+a[j];
        }
        for(int j=i+1; j<n; j++)
        {
            sum2=sum2+a[j];
        }
        cout<<sum1<<" "<<sum2<<endl;
        if(sum1-sum2==k)
        {
            cout<<"True";
            u=0;
            break; 
        }
    }
    if(u==1)
    {
        cout<<"False";
    }
}