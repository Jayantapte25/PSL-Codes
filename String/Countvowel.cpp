#include <iostream>
using namespace std;
int main(){
    
    string s,p;
    int o=0;

    s="Hello World";
    p="aeiouAEIOU";
    
    int f=s.length();
    int q=p.length();
    
    for(int i=0; i<q; i++)
    {
        for(int j=0; j<f;j++)
        {
            if(s[i]==p[j])
            {
                o++;
            }
        }
    }
    cout<<o;
}
