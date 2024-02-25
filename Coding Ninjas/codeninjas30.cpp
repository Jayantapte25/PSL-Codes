//Product Of Array Except Self 

#include <iostream>
using namespace std;

int main()
{
    int n, a[100],b[100];
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum=1;
    for(int i=0; i<n; i++)
    {
        sum =1;
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                continue;
            }
            sum=sum*a[j];
        }
        b[i]=sum;
    }

    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}