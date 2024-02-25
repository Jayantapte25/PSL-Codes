#include <iostream>
using namespace std;

template <class x>
x big(x a,x b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout<<big(10,20)<<endl;
    cout<<big(1.0,12.4)<<endl;    
    return 0;
}