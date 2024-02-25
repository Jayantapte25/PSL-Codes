// removing repeated letter from the string
//jjjaaayyyaaannnttt

#include <iostream>
using namespace std;

int main()
{
    string s;
    string b;
    cout<<"Enter the string: ";
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        int g=s[i];
        if(g==s[i+1])
        {
            continue;
        }
        else
        {
            b=b+s[i];
        }
    }
    cout<<b;
}