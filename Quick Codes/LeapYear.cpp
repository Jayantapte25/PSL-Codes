#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter your year";
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"The year is leap";
        return 0;
    }
    cout<<"The year is not a leap year";    
}