// to find the frequency of each character in a string:

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s = "abbcccddddeeeeeffffffggggggghhhhhhhhiiiiiiiiijjjjjjjjjj";
    int count = 1;
    map <char, int> m;

    for(int i=0; i<s.length(); i++)
    {
        m[s[i]]++;
    }

    for(char i='a'; i<='z'; i++)
    {
        cout<<m[i];
    }
}