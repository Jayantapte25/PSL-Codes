#include <iostream>
using namespace std;
int main(){

    string p;    
    cout<<"Enter the string"<<endl;
    getline(cin, p);

    int q=p.length();
    int c=0;
    
    for(int i=0; i<q; i++)
    {
        if(p[i]==' ')
        {
            c++;
        }
    }
    c++;
    cout<<c;
}
