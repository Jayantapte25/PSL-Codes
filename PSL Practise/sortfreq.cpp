#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, t[100], temp;
    map<int, int> m;
    cout << "Enter the elements: ";
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> t[j];
    }

    for (int i = 0; i < n; i++)
    {
        m[t[i]]++;
    }
    
    for (int r = 1; r <= n; r++) // Changed the loop structure here
    {
        for (int i = 0; i < n; i++)
        {
            if (m[t[i]] == r) // Changed the while loop to an if statement
            {
                cout << t[i] << " ";
            }
        }
    }
    return 0;
}
