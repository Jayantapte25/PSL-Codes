#include <iostream>
using namespace std;

class a
{
    public:
        virtual void f1()
        {
            cout<<"This is f1 function call in class A";\
        }
};

class b : public a
{
    public:
        void f1()
        {
            cout<<"This is f1 in Class B";
        }
};

int main()
{
    a *p, o1;
    b o2;
    p= &o2;
    p->f1();
}