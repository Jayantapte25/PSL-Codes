#include <iostream>
#include <cmath> // Include the cmath library for pow function
using namespace std;

int main() 
{
    int i=0,u,n;
    int a[100], sum=0;

    cout<<"Enter the number";
    cin>>n;

    while(n!=0)
    {
        u=n%10;
        a[i]=u;
        n=n/10;
        i++;
    }
    for(int j=0; j<i; j++)
    {
        cout<<a[j]<<" ";
    }
    int y=i;
    for(int k=0; k<y; k++)
    {
        sum = sum + pow(2, k)*(a[k]);
    }
    cout<<"The decimal value is:"<<sum<<endl;
}