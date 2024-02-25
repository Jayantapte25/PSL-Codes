#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> h;
    int n, a[100], b[100];
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[a[i]] > 1) // Corrected the condition
        {
            b[j] = a[i];
            j++;
        }
    }
    int t = j;
    cout << "Duplicate elements: ";
    for (int i = 0; i < t; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
