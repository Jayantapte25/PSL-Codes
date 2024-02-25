#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 4, 1, 5, 7, 4, 2, 5, 6, 5, 7, 3, 7, 34, 34, 7, 3};
    int n = sizeof(a) / sizeof(a[0]);

    int k = 3; 
    for (int i = 0; i <= n - k; i++)
    {
        int max_in_window = a[i];
        for (int j = 1; j < k; j++)
        {
            if (a[i + j] > max_in_window)
            {
                max_in_window = a[i + j];
            }
        }
        cout << max_in_window << " ";
    }

    return 0;
}
