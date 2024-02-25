//Here's the beginning of the Fibonacci sequence:
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34

#include <iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,next=0;
    cout<<"Enter the number";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        if(i<=0)
        {
            next=i;
            cout<<next;
        }
        else
        {
            next=a+b;
            a=b;
            b=next;
        }
        cout<<next;
        cout<<" "; 
    }
}