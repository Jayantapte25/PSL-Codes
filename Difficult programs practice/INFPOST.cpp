#include <iostream>
#include <stack>
using namespace std;

int priority(char c)
{
    if(c=='+' || c=='-')
    {
        return 1;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s;
    cout<<"Enter the number";
    cin >> s;
    stack<char> stack1;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!='^' && s[i]!='(' && s[i]!=')')
        {
            cout<<s[i];
            stack1.push(s[i]);
        }
        else
        {
            if(stack1.empty())
            {
                stack1.push(s[i]);
            }
            else if(s[i]=='(')
            {
                stack1.push(s[i]);
            }
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
            {
                if(priority(s[i])>priority(stack1.top()))
                {
                    stack1.push(s[i]);
                }
                else
                {
                    while(priority(s[i])<=priority(stack1.top()))
                    {
                        cout<<stack1.top();
                        stack1.pop();
                    }
                    stack1.push(s[i]);
                }
            }
            if(s[i]==')')
            {
                while(stack1.top()!='(')
                {
                    cout<<stack1.top();
                    stack1.pop();
                }
            }
        }
    }
}