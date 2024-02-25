#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number";
    cin>>n;
    int m=n;
    int p=0;

    if(m==0)
    {
        cout<<"Number is not a prime number";
    }
    if(m==1)
    {
        cout<<"Number is not a prime number";
    }
    else
    {
        for(int i=2; i<m-1; i++)
        {
            if(m%i==0)
            {
                cout<<"Number is not a prime number";
                p=8;
                break;
            }
        }
        if(p!=8)
        {
            cout<<"Number is prime";
        }    
    }
}