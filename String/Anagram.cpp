#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <char, int> M,P;
    string s,w;

    cout<<"Enter the 1st string";
    cin>>s;

    cout<<"Enter the 2nd string";
    cin>>w;

    int T=7;

    for(int i=0; i<s.length(); i++)
    {
        M[s[i]]++;
    }
    for(int j=0; j<w.length(); j++)
    {
        P[w[j]]++;
    }

    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<w.length(); j++)
        {
            if(s[i]==w[j])
            {
                if(M[s[i]]!=P[w[j]])
                {
                    cout<<"Not an Anagram";
                    T=9;
                    break;
                }
            }
        }
        if(T==9)
        {
            break;
        }
    }
    if(T==7)
        {
            cout<<"It is an Anagram";
        }
}

//silent & listen

/*
Taking the strings
Initialising the hash map
For loop - add strong in 2 Hash maps
Testing for the anagram
*/