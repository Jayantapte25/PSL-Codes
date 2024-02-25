#include <iostream>
#include <queue>
using namespace std;

class StackUsingQueue {

    queue<int> q1;
    queue<int> q2;

public:
    void push(int data)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop()
    {
        if (q1.empty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return a default value or handle the error as needed.
        }
        int top = q1.front();
        q1.pop();
        return top;
    }

    int top()
    {
        if (q1.empty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return a default value or handle the error as needed.
        }
        return q1.front();
    }
};

int main() {
    StackUsingQueue stack;
    int choice, data;

    while (1)
    {
        cout << "1. Push 2. Pop 3. Top 4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the element to push: ";
                cin >> data;
                stack.push(data);
                break;
            case 2:
                cout << "Popped: " << stack.pop() << endl;
                break;
            case 3:
                cout << "Top element: " << stack.top() << endl;
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
