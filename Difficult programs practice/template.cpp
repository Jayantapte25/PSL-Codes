#include <iostream>
using namespace std;

template <class T>
T jayant(T x, T y)
{
    double n=x;
    double sum;
    double p=y;
    return sum=n+p;
}

template <class H>
void cayman(H &x, H &y)
{
    x++;
    y++;
}
int main()
{
    int g, h;
    float i, j;
    cin >> i >> j;
    cout << jayant(i, j) << endl;

    cout<<endl;
    cout<<endl;
    cin >> g >> h;
    cout << jayant(g, h) << endl;

    cout<<endl;
    cout<<endl;
    
    int x = 0, y = 0;
    cin >> x >> y;
    cayman(x, y);
    cout << "x after cayman: " << x << endl;
    cout << "y after cayman: " << y << endl;
}
