//for the given number n find the smallest number strictly greater than n that has same set of digits as n


#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "56789";
    int num = stoi(s);
    int w = num + 1;

    map<char, int> m;
    map<char, int> k;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }

    for (int i = w; i <= num * 2; i++) {
        int e = i;
        k.clear();

        while (e > 0) {
            k['0' + (e % 10)]++;
            e /= 10;
        }

        bool matching = true;

        for (int j = 0; j < s.length(); j++)
        {
            if (m[s[j]] != k[s[j]]) {
                matching = false;
                break;
            }
        }

        if (matching) {
            cout << i;
            return 0; // Return only when a match is found
        }
    }

    return 0; // If no match is found, return 0
}
