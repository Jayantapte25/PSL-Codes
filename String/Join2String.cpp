#include <iostream>
using namespace std;

int main() {
    string s, w, e;

    cout << "Enter the first string: ";
    cin >> s;

    cout << "Enter the second string: ";
    cin >> w;

    e = s + w;

    cout << "Concatenated string: " << e << endl;

    return 0;
}
