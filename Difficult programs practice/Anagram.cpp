#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, int> m1,m2;
    string s1, s2;

    cout<<"Enter the 2 strings";
    getline(cin, s1);
    getline(cin, s2);

    if(s1.length()!=s2.length())
    {
        cout<<"not an Anagram";
        return 0;
    }
    for(int i=0; i<s1.length(); i++)
    {
        m1[s1[i]]++;
    }
    for(int i=0; i<s2.length(); i++)
    {
        m2[s2[i]]++;
    }

    for(int i=0; i<s1.length(); i++)
    {
        if(m1[s1[i]]!=m2[s1[i]])
        {
            cout<<"Not an Anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;    
}