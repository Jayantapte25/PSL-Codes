#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <char,int> M;

    string s="Hello World";

    for(int i=0;i<s.length();i++){
        M[s[i]]++;                      //For keeping  count
    }

    for(auto i:M){
        cout<<i.first<<" "<<i.second<<endl;
    }
}