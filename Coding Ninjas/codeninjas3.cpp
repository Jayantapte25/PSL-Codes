//This code is to print n natural numbers or n squares depending on the user's choice

#include <iostream>
using namespace std;

int main()
{
    int p,sum=1;
    cout<<"Enter n and p: ";
    cin >> p;

    int ans;
    cout<<"choice: 1. print n natural numbers 2. print n squares ";
    cin>>ans;

    switch(ans)
    {
        case 1:
            for(int i=1; i<=p; i++)
            {
                cout<<i<<" ";
            }
            break;

        case 2:
            for(int i=1; i<=p; i++)
            {
                sum=sum*i;
            }
            cout<<sum;
            break;

        default:
            break;
    }
    return 0;
}