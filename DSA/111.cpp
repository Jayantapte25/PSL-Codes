#include <iostream>
using namespace std;

int main()
{
    string s = "11000111101";
    int count = 0;
    int maxCount = 0; // Variable to store the maximum consecutive ones

    for(int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            count = 0; // Reset the count when '0' is encountered
        } else {
            count++; // Increment the count when '1' is encountered
            if (count > maxCount) {
                maxCount = count; // Update the maxCount if needed
            }
        }
    }

    cout << maxCount; // Output the maximum consecutive ones
    return 0;
}
