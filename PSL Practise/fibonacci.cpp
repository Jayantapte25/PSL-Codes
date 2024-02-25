#include <iostream>
using namespace std;

int main()
{
    int n, a=0, b=1, results=0, t;
    cout<<"Enter the position";
    cin>>t;

    while(results<=t)
    {
        if(results==0 || results==1)
        {
            cout<<results<<" ";
            results++;
        }
        else 
        {
            results = a+b;
            a=b;
            b=results;
            if(results>t)
            {
                cout<<t<<" ";
            }
            cout<<results<<" ";
        }
    }

    return 0;
}