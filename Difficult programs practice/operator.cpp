#include <iostream>
using namespace std;

class jadu
{
    int x;
    public:
    jadu(){}
    jadu(int a)
    {
        x=a;
    }
    jadu operator+(jadu &d)
    {
        jadu j;
        j.x=x + d.x;
        return j;
    }
    jadu operator-(jadu &d)
    {
        jadu j;
        j.x=x - d.x;
        return j;
    }
    jadu operator*(jadu &d)
    {
        jadu j;
        j.x=x * d.x;
        return j;
    }
    jadu operator++(int)
    {
        jadu j;
        j.x = x++;
        return j;
    }
    jadu operator--(int)
    {
        jadu j;
        j.x = x--;
        return j;
    }
    jadu operator--()
    {
        jadu j;
        j.x = --x;
        return j;
    }
    jadu operator++()
    {
        jadu j;
        j.x = ++x;
        return j;
    }
    friend jadu operator+(int n,jadu &d);
    friend jadu operator-(jadu &d, int n);
    void display()
    {
        cout<<x<<endl;
    }
    
};
jadu operator+(int n, jadu &d)
{
    jadu j;
    j.x = n + d.x;  // Use d.x to access the private member
    return j;
}

jadu operator-(jadu &d, int n)
{
    jadu j;
    j.x = d.x - n;  // Use d.x to access the private member
    return j;
}

int main()
{
    jadu j1(10),j2(20),j3,j4,j5,j6,j11,j12;
    j3=j1+j2;
    j3.display();
    j4=j1-j2;
    j4.display();
    j5=j1*j2;
    j5.display();

    j1++;
    j1.display();
    j1--;
    j1.display();
    ++j1;
    j1.display();
    --j1;
    j1.display();

    j11=10+j1;
    j11.display();
    j12=j1-10;
    j12.display();
}