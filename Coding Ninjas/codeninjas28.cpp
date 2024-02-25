// Best time to buy & sell a stock

#include<iostream>
using namespace std;

int jayant(int a[],int n)
{
    int sum=0;
    int k;
    int l;
    int p;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            p=a[j]-a[i];
            if(p>=sum)
            {
                sum=p;
                k=i;
                l=j;
            }
        }
    }
    cout<<"Buy on day "<<a[k]<<" and sell on day "<<a[l]<<endl;
    return sum;
}
int main()
{
    int a[100],n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<jayant(a,n);
    return 0;
}
