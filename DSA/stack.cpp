#include <iostream>
using namespace std;

int t=0, a[100],n;

void push()
{
    cout<<"Enter the element to be added";
    cin>>n;
    if(t==99)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        a[t]=n;
        t++; 
    }   
}

void pop()
{
    if(t==0)
    {
        cout<<"Empty";
    }
    else
    {
        t--;
    }
}
void high()
{
    if(t==0)
    {
        cout<<"Empty";
    }
    else
    {
        cout<<a[0];
    }
}
int main()
{
    int chat;
    while(1)
    {
        cout<<"1. POP - 2. Push - 3. Top"<<endl;
        cout<<"Enter your choice";
        cin>>chat;
        switch(chat)
        {
            case 1:
                pop();
                break;
            case 2:
                push();
                break;
            case 3:
                high();
                break;
            case 4:
                exit(0);   
            default:
                break;
        }
    }
    return 0;
}