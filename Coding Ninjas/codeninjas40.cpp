// sum of two arrays

#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], n1,n2;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    int n=0;
    for(int i=0; i<n1; i++)
    {
        n=(n*10) + a[i];
    }
    cout<<n<<endl;
    int m=0;
    for(int i=0; i<n2; i++)
    {
        m=(m*10) + b[i];
    }
    cout<<m<<endl;
    int sum = n+m;
    cout<<sum<<endl;
    return 0;
}