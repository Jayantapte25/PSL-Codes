//code to reverse the string word wise

#include <iostream>
using namespace std;

int main()
{
    string s,a;
    cout << "Enter the string: ";
    getline(cin,s);
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i]==' ')
        {
            for(int j=i+1; j<s.length() && s[j]!=' '; j++)
            {
                a += s[j];
            }
            a += ' ';
        }
    }
    string g;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=' ')
        {
            g+= s[i];
        }
        else
        {
            break;
        }
    }
    string h;
    h=a+g;
    cout << h;
    return 0;    
}