//code to shift the elements of an array to the right from a given position

#include <iostream>
using namespace std;

int main()
{
    int n,a[100],sum=0; 
    cout<<"Total flowers";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter no of flowers in each type"<<i+1<<": ";
        cin>>a[i];
    }
    int j=0;
    for(int i=0; i<n; i=i+5)
    {
        sum = sum + a[i];
        j=i;
    }
    if(j%5)
    {
        cout<<"total cost"<<sum<<endl;
    }
    else
    {
        sum=sum+a[j];
        cout<<"total cost"<<sum<<endl;
    }
    return 0;
}