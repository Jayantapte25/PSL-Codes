//code for finding the first occurence of a string in another string

#include <iostream>
using namespace std;

int main()
{
    string s = "HelloWorld";
    string v = "ld";

    int k=0;
    int o=1;
    for(int i=0; i<s.length(); i++)
    {
        k=i;
        for(int j=0; j<v.length(); j++)
        {
            while(s[i]==v[j])
            {
                j++;
                i++;
                if(j=v.length()-1)
                {
                    cout<<"Found"<<endl;
                    o=0;
                    return 0;
                }
            }
        }
        i=k;
    }
    if(o=1)
    {
        cout<<"not found";
    }
}