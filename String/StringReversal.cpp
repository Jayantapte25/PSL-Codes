#include <iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter the string";
    cin>>s;

    int m=s.length();

    for(int i=m; i>-1; i--)
    {
        cout<<s[i]<<endl;
    }
}