//Maximum subarray sum after K concatenation

#include <iostream>
using namespace std;

int main()
{
    int a[100],n,k,b[100];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the value of k: ";
    cin >> k;
    int max = n*k;
    int p=0;
    
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            b[p] = a[j];
            p++;
        }
    }
    for(int i=0; i<max; i++)
        cout << b[i] << " ";
    return 0;    
}