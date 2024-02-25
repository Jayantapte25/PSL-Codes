//code for finding the kth prime number between two numbers

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    
    return true;
}

int main() {
    int a, b, k;
    cout << "First Integer: ";
    cin >> a;
    cout << "Second Integer: ";
    cin >> b;

    if (a > b) {
        cout << "A should be less than B. Please re-enter values." << endl;
        return 0;
    }

    cout << "Third Integer: ";
    cin >> k;

    int n = 0;
    int p = a;
    
    while (n < k) {
        p++;
        if (isPrime(p)) {
            n++;
        }
        if (p > b) {
            cout << -1;
            return 0;
        }
    }
    
    cout << p;
    return 0;
}
