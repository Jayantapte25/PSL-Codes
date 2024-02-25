//Merge Intervals

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of intervals: ";
    cin >> n >> m;

    // Assuming n is the number of intervals and m is the size of each interval (start and end)
    int a[100][2];

    cout << "Enter the intervals: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j][0] != 0 && a[i][1] >= a[j][0])
                {
                    a[i][1] = max(a[i][1], a[j][1]);
                    a[j][0] = 0;
                    a[j][1] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i][0] != 0 || a[i][1] != 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
