//Array partition with minimum difference between sum of each partition

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int bb(int arr[], int n, int b1, int b2) {
    if (n == 0) {
        return abs(b1 - b2);
    }

    int diff1 = bb(arr, n - 1, b1 + arr[n - 1], b2);
    int diff2 = bb(arr, n - 1, b1, b2 + arr[n - 1]);

    return min(diff1, diff2);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int b1 = 0;
    int b2 = 0;

    int result = bb(arr, n, b1, b2);

    cout << "Minimum absolute difference between subset sums: " << result << endl;
    
    return 0;
}
