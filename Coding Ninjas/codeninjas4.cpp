// this code is to practise function overloading

#include <iostream>
using namespace std;

double area(int l,int b)
{
    cout<<endl;
    return l*b;
}
double perimeter(int l,int b)
{
    cout<<endl;
    return 2*(l+b);
}
double area(int r)
{
    cout<<endl;
    return 3.14*r*r;
}
double perimeter(int r)
{
    cout<<endl;
    return 2*3.14*r;
}
double triangle(int l, int b)
{
    cout<<endl;
    return 0.5*l*b;
}
double triangle(int q, int w, int e)
{
    cout<<endl;
    return q+w+e;
}

int main()
{
    int p;
    while(1)
    {
        cout<<endl;
        cout<<"1. Area of Rectangle \n2. perimeter of Rectange \n3. Area of circle \n4. Perimeter of circle \n5. Area of traingle \n6. perimeter of rectange \n7. Exit \n";
        cin>>p;

        switch(p)
        {
            case 1:
            {
                int l,b;
                cout<<"Enter length and breadth of rectangle \n";
                cin>>l>>b;
                cout<<area(l,b);
                break;
            }
            case 2:
            {
                int l,b;
                cout<<"Enter length and breadth of rectangle \n";
                cin>>l>>b;
                cout<<perimeter(l,b);
                break;
            }
            case 3:
            {
                int r;
                cout<<"Enter radius of circle \n";
                cin>>r;
                cout<<area(r);
                break;
            }
            case 4:
            {
                int r;
                cout<<"Enter radius of circle \n";
                cin>>r;
                cout<<perimeter(r);
                break;
            }
            case 5:
            {
                int b,h;
                cout<<"Enter base and height of triangle \n";
                cin>>b>>h;
                cout<<triangle(b,h);
                break;
            }
            case 6:
            {
                int a,b,c;
                cout<<"Enter sides of triangle \n";
                cin>>a>>b>>c;
                cout<<triangle(a,b,c);
                break;
            }
            case 7:
            {
                exit(0);
            }
            default:
            {
                cout<<"Invalid input \n";
                break;
            }
        }
    }
    return 0;
}   