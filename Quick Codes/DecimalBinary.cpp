#include <iostream>
using namespace std;

int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int binary[32]; // Assuming a 32-bit binary representation

    if (decimal == 0) {
        cout << "Binary representation: 0" << endl;
        return 0;
    }

    int index = 0;
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
