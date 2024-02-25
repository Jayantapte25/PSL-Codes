#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the number";
    cin >> s;

    int count=0, max=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            count=0;
        }
        else 
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
    }
    cout<<"jayant APt";
    cout<<max;
    return 0;
}