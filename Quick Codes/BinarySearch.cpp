#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the element to be searched: ";
    int m;
    cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;
    int mid;

    while (l <= r) {
        mid = (l + r) / 2;

        if (a[mid] == m) {
            cout << "Element found at index " << mid << endl;
            break;
        } else if (a[mid] > m) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (l > r) {
        cout << "Element not found." << endl;
    }

    return 0;
}