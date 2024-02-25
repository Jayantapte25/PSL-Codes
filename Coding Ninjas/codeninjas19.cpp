#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int a = 0, b = 1, result;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            cout << i << " ";
        }
        else
        {
            result = a + b;
            a = b;
            b = result;
            cout << result << " ";
        }
    }

    return 0;
}
