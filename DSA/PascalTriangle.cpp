#include <iostream>
using namespace std;

int chut(int n, int r) {
    int i = 0, total = 1;
    while (i < r) {
        total *= n - i;  
        total /= i + 1;  
        i++;
    }
    return total;
}

int main() {
    int rows, u = 6;
    int n;
    n=u*2;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << " ";
        }

        for (int k = 0; k <= i; k++) {  
            cout << chut(i, k) << " ";  
        }
        cout << endl;  
        n--;
    }
    return 0;
}