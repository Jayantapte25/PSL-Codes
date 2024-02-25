//code for longest consecutive sequence

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[100], max = 0, c = 1;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); // Sort the array

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1] + 1)
        {
            c++;
        }
        else if (a[i] != a[i - 1])
        {
            c = 1;
        }

        if (c > max)
        {
            max = c;
        }
    }

    cout << max;
    return 0;
}
