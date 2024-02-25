#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter your number: ";
    cin >> n;
    int m = n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == m) {
        cout << "Number is perfect." << endl;
    } else {
        cout << "Not a perfect number." << endl;
    }
}