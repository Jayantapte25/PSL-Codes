#include <iostream>
using namespace std;

int main() {
    string s = "hippopotamus";
    string w;

    cout << "Enter the word to search for: ";
    cin >> w;

    int count = 0;
    bool found = false;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < w.length(); j++) {
            if (w[j] == s[i]) {
                count++;
            }
        }
        if (count == w.length()) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Word found";
    } else {
        cout << "Word not found";
    }

    return 0;
}
