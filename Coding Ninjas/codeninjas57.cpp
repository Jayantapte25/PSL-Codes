#include <iostream>
using namespace std;

int main()
{
    int n, a[100],sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(a[0]%5==0)
    {
        cout<<'0'<<" "<<endl;
    }
    for(int i=0; i<n; i++)
    {
        sum = a[i];
        for(int j=i+1; j<n; j++)
        {
            sum = sum + a[j];
            if(sum%5==0)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    return 0;
}