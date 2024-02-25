//code for finding the maximum number of 1s after flipping a subarray

#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements (0s and 1s): ";
    cin >> s;

    int max = 0;

    for (int j = 0; j < n; j++)
    {
        string r = s;
        int sum = 0;
        
        for (int i = j; i < n; i++)
        {
            if (r[i] == '0') {
                r[i] = '1';
            } else {
                r[i] = '0';
            }
            
            sum = 0; // Reset the sum for each subarray
            for (int k = 0; k < n; k++) {
                sum += r[k] - '0'; // Convert character '0' or '1' to integer 0 or 1
            }

            if (sum > max) {
                max = sum;
            }
        }
    }

    cout << "Maximum count of 1s after flipping: " << max << endl;

    return 0;
}