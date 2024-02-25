#include <iostream>
#include <stdexcept> 
using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    try
    {
        int z = 17;
        if(n==0)
            throw runtime_error("We can divide by zero");
        int p=z/n;
        cout << "The quotient of " << n << " divided by " << z << " is " << p << endl;
    }
    catch (const runtime_error& e)
    {
        cout << "Exception occurred: " << e.what() << endl;
    }
    return 0;
}