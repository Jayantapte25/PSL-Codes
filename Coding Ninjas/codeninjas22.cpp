//if a number is missing in an array of n-1 elements and the elements are from 1 to n. Find the missing number.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[100], n, land =INT_MAX;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> a[i];
    }
    for(int i=1; i<100; i++)
    {
        int p=1;
        for(int j=0; j<n; j++)
        {
            if(i==a[j])
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            cout<<i<<" ";
            break;
        }
    }
    return 0;1
}