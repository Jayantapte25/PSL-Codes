#include <iostream>
using namespace std;

int stack1[100], stack2[100];
int top1 = -1, top2 = -1;

void push(int stack[], int &top, int value) {
    if (top == 99) {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    stack[top] = value;
}

int pop(int stack[], int &top) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

void enqueue(int data) {
    push(stack1, top1, data);
}

int dequeue() {
    if (top1 == -1 && top2 == -1) {
        cout << "Queue is empty." << endl;
        return -1;
    }

    if (top2 == -1) 
    {
        while (top1 >= 0) 
        {
            int item = pop(stack1, top1);
            push(stack2, top2, item);
        }
    }

    int value = pop(stack2, top2);
    cout << "Dequeued: " << value << endl;
    return value;
}

int main() {
    int choice, data;

    while (1) {
        cout << "1. Enqueue 2. Dequeue 3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to enqueue: ";
                cin >> data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3: 
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
