#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string";
    cin>>s;
    stack <char> s1;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
        {
            s1.push(s[i]);
        }
        else if(s[i]=='(')
        {
            s1.push(s[i]);
        }   
        else if(s[i]==')')
        {
            if(s1.top()=='(')
            {
                cout<<"Duplicates found";
                break;
            }
            while(!s1.empty() && s1.top()!='(')
            {
                s1.pop();
            }
            if(!s1.empty())
            {
                s1.pop();
            }
        }
    }
    return 0;
}