#include <iostream>
using namespace std;

int main()
{
    int n, p=0,o;
    cout<<"Enter the number";
    cin>>n;

    int m=n;
    while(n>0)
    {
        o=n%10;
        p=(p*10)+o;
        n=n/10;
    }
    cout << "The reversed number is: " << p << endl;
    return 0;
}