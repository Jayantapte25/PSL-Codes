#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter your number: ";
    cin >> n;
    int m = n;
   
    for (int i = 0; i < m; i++) {
        int p = n % 10;
        sum = sum + (p * p * p);
        n = n / 10;
    }
   
    if (sum == m) {
        cout << "The number is Armstrong." << endl;
    } else {
        cout << "The number is not an Armstrong." << endl;
    }
}