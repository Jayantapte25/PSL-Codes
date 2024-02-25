//code for maximum sum path in a matrix

#include <iostream>
using namespace std;

int k, l, m, n;

// Corrected function declaration and added data types for i and j
int jayant(int a[100][100], int i, int j)
{
    if (i < n && j < m)
    {
        if (a[i + 1][j - 1] < a[i + 1][j] && i < n && j < m)
        {
            if (a[i + 1][j] > a[i + 1][j + 1] && i < n && j < m)
            {
                k = i + 1;
                l = j;
                return a[i + 1][j];
            }
            else if (i < n && j < m) // Removed redundant condition
            {
                k = i + 1;
                l = j + 1;
                return a[i + 1][j + 1];
            }
        }
        else if (i < n && j < m)
        {
            if (a[i + 1][j - 1] > a[i + 1][j + 1] && i < n && j < m)
            {
                k = i + 1;
                l = j - 1;
                return a[i + 1][j - 1];
            }
            else if (i < n && j < m)
            {
                k = i + 1;
                l = j + 1;
                return a[i + 1][j + 1];
            }
        }
    }
    // Return 0 if the conditions are not met
    return 0;
}

int main()
{
    int sum1 = 0;
    int a[100][100];

    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int q = 0, sum = 0;
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) // Corrected condition
    {
        if (q == 0)
        {
            sum = a[i][j];
        }
        sum = sum + jayant(a, i, j);

        j = l;
        i = k;

        q = 1;

        if (sum > sum1 && i == n - 1)
            sum1 = sum;
            k++;
            j = k;
            q = 0;       
    }

    cout << "Maximum sum: " << sum1 << endl;

    return 0;
}
