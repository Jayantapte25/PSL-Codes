//code for finding the type of character entered

#include <iostream>
using namespace std;

int main()
{
    char n;
    cout << "Enter the character: ";
    cin >> n;
    int p=1;
    for(char i='a'; i<'z'; i++)
    {
        if(i == n)
        {
            cout << "Alphabet";
            p=0;
        }
    }
    for(char i='A'; i<'Z'; i++)
    {
        if(i == n)
        {
            cout << "Capital Alphabet";
            p=0;
        }
    }
    if(p == 1)
    {
        cout << "Not an alphabet";
    }
    return 0;
}