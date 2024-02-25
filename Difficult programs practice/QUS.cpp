#include <iostream>
using namespace std;

int stack1[100],stack2[100], n=100, top=-1, topless=-1, gg;

void push(int n)
{
    if(top==100)
    {
        cout<<"Stack is full";
    }
    else
    {
        top++;
        stack1[top]=n;
    }
}
int pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        gg=stack1[top--];
        return gg;
    }
}
void push1(int n)
{
    if(topless==100)
    {
        cout<<"Stack is full";
    }
    else
    {
        topless++;
        stack2[topless]=n;
    }
}
void high()
{
    int max=stack1[0];
    cout<<"Highest element is: "<<max;
}

void dequeue()
{

}

int main()
{
    int n,nb;
    cout<<"Enter your choice: 1. Push 2. Pop 3. Display 4. Exit";
    cin >> n;
    while(1)
    {
        switch(n)
        {
            case 1:
                cout<<"Enter the value";
                cin>>nb;
                push(nb);
                break;
            case 2:
                pop();
                break;
            case 3:
                exit(0);
            default:
                cout<<"Invalid choice";
        }
    }
}