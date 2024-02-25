// code for finding the minimum number of operations required to convert a string to a string of alternating 0s and 1s

#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string r,l;

    for(int i=1; i<=s.length(); i++)
    {
        if(i%2==0)
        {
            r[i]='0';
        }
        else
        {
            r[i]='1';
        }
    }

    for(int i=1; i<=s.length(); i++)
    {
        if(i%2==0)
        {
            l[i]='1';
        }
        else
        {
            l[i]='0';
        }
    }
    
    int p=0,k=0;
    for(int i=0; i<=s.length(); i++)
    {
        if(s[i]!=r[i])
        {
            p++;
        }
        else if(s[i]!=l[i])
        {
            k++;
        }
    }
    if(p<k)
    {
        cout<<p;
    }
    else
    {
        cout<<k;
    }

    return 0;
}