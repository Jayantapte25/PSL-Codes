#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n;
    cout << "Enter amount: ";
    cin >> n;

    int i = 9;  // Start with the largest denomination.
    
    while (n > 0 && i >= 0) {
        if (a[i] <= n) {
            cout << a[i] << " ";
            n -= a[i];
        }
        else {
            i--;  // Move to a smaller denomination.
        }
    }

    return 0;
}
