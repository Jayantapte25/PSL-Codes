//code to find the maximum sum of subarrays

#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = 0; // Initialize maxSum to 0.
    
    for (int i = 0; i < n; i++) {
        int currentSum = 0; // Initialize currentSum to 0.
        
        for (int j = i; j < n; j++) {
            currentSum += arr[j]; // Add the element to currentSum.
            
            if (currentSum > maxSum) {
                maxSum = currentSum; // Update maxSum if currentSum is greater.
            }
        }
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubarraySum(arr, n);
    cout << "Maximum sum of subarrays: " << result << endl;

    return 0;
}
