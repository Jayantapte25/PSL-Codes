// Sort a Stack
#include <iostream>
using namespace std;

int top=-1, a[100],c,b,n;

void push(int b)
{
    top++;
    a[top]=b;
}
void pop(int c)
{
    if(top==-1)
    {
        cout << "Stack is empty";
    }
    else
    {
        top--;
    }
}
void sort()
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{   
    while(1)
    {
        cout << "Enter the choice";
        cin >> n;

        switch (n)
        {
            case 1:
                cout << "Enter the element to be pushed";
                cin >> b;
                push(b);
                break;
            case 2:
                pop(c);
                break;
            case 3:
                sort();
                break;
        }
    }
    return 0;
}