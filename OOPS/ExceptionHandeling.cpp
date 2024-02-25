#include <iostream>
#include <exception>
using namespace std;

int main()
{
    double bal = 2000;
    try
    {
        // Credit
        int n;
        cout << "Enter the amount to be credited: ";
        cin >> n;
        if (n > 0)
        {
            bal = bal + n;
            cout << "The balance is " << bal << endl;
        }
        else
        {
            throw runtime_error("Invalid Value");
        }

        // Debit
        int u;
        cout << "Enter the amount to be debited: ";
        cin >> u;
        if (u < bal)
        {
            bal = bal - u;
            cout << "The balance is " << bal << endl;
        }
        else
        {
            throw runtime_error("Invalid Value");
        }
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}