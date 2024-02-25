#include <iostream>
using namespace std;

namespace upsc1
{
    int i=9;
    void display()
    {
        cout<<"Enter the value 1"<<endl;
    }
}
namespace  upsc2
{
    int i=8;
    void display()
    {
        cout<<"Enter the value 1"<<endl;
    }
}
int main()
{
    upsc1::display();
    upsc2::display();

    cout<<upsc1::i<<endl;;
    cout<<upsc2::i<<endl;;
    return 0;
}