//Complex Number Class with operator overloading

#include <iostream>
using namespace std;

class complex
{
    private:
        int x;
    public:
        complex(){};
        complex(int n)
        {
            x = n;
        }
        complex operator + (complex &c)
        {
            complex temp;
            temp.x = x + c.x;
            return temp;
        }
        complex operator * (complex &c)
        {
            complex temp;
            temp.x = x * c.x;
            return temp;
        }
        void display()
        {
            cout<<x<<endl;
        }
};

int main()
{
    complex x1(8),x2(7),x3,x4;
    x3 = x1 + x2;
    x3.display();
    x4 = x1 * x2;
    x4.display();
    return 0;    
}