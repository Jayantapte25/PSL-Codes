#include <iostream>
using namespace std;

class cayman;
class jayant{
    int money=20;
    friend void rohit(jayant J, cayman C);
};
class cayman{
    int money=30;
    friend void rohit(jayant J, cayman C);
};
void rohit(jayant obj1, cayman obj2){
    cout<<obj1.money+obj2.money<<endl;
}
int main()
{
    jayant obj1;
    cayman obj2;
    rohit(obj1, obj2);
}