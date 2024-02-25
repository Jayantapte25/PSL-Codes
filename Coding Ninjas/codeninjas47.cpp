//nth term of a GP

#include <iostream>
using namespace std;

int main()
{
    int a,b,sum=1,c;
    cin >> a >> b >> c;
    sum = b;
    for(int i=1; i<a; i++)
    {
        sum = sum * c;
    }
    cout<<sum;
}