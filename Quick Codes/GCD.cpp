#include <iostream>
using namespace std;

int main()
{
    int n=18,p=12,q=0;

    for(int i=1; i<=18; i++)
    {
        if(n%i==0 && p%i==0)
        {
            if(q<i)
            {
                q=i;
            } 
        }
    }
    cout<<q<<endl;

    // To find LCM
    int lcm;

    lcm=(n*p)/q;
    cout<<lcm;
}

// HCF*LCM=n*p  