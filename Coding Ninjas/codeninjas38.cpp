#include <iostream>
using namespace std;

int main()
{
    int n,a[100],k;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout<<"Enter reverse";
    cin>>k;
    
    int b[100],j=0;
    k=k-1;
    for(int i=k; i>=0; i--)
    {
        b[j]=a[i];
        j++;
    }
    for(int p=k+1; p<n; p++)
    {
        b[j]=a[p];
        j++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}