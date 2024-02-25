#include <iostream>
using namespace std;

namespace MyNamespace
{
    int x = 5;
    void display()
    {
        cout << "Inside MyNamespace: " << x << endl;
    }
}

namespace YourNamespace
{
    int x = 10;
    void display()
    {
        cout << "Inside YourNamespace: " << x << endl;
    }
}

int main()
{
    MyNamespace::display();
    YourNamespace::display();

    cout << "MyNamespace::x = " << MyNamespace::x << endl;
    cout << "YourNamespace::x = " << YourNamespace::x << endl;

    return 0;
}
