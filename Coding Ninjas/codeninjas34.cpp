#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int k=1;
    for(int i=0; i<n; i++)
    {
        if(k==a[i])
        {
            k++;
            i=0;
        }
        if(i==n-1)
        {
            cout << k << endl;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                cout << a[i] << endl;
                break;
            }
        }
    }
}