#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    map<char, int> m;
    for (int i = 0; i < str.length(); i++)
    {
        m[str[i]]++;
        if(m['e']==2)
        {
            str[i]='0';
            m['e']--;
        }
    }

    for (int i = 0; i < str.length(); i++)
    {
            cout<<str[i];
    }
}