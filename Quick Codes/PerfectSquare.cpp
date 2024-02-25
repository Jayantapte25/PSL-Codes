#include <iostream>
using namespace std;

int main() {
    int n, m, p = 9;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if (i * i == n) {
            cout << "The number is a perfect square";
            p = 0;
            break;
        }
    }
   
    if (p != 0) {
        cout << "The number is not a perfect square";
    }
   
    return 0;
}
