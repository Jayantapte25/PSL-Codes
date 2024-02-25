//Write a program to create a class representing a circle with methods to calculate area and circumference.
#include<iostream>
using namespace std;

class circle
{
    float p,m;
    public:
        double area(float a)
        {
            return 3.14*a*a;
        }
        double circumference(float a)
        {
            return 2*3.14*a;
        }
};

int main()
{
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;

    circle c;
    double b=c.area(r);
    double f=c.circumference(r);

    cout<<"Area of the circle is: "<<b<<endl;
    cout<<"Circumference of the circle is: "<<f<<endl;
    
    return 0;
}