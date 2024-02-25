#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> inputStack;
    stack<int> outputStack;

public:
    void enqueue(int data) {
        inputStack.push(data);
    }

    int dequeue() {
        if (outputStack.empty()) {
            while (!inputStack.empty())
            {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }

        if (outputStack.empty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        int value = outputStack.top();
        outputStack.pop();
        cout << "Dequeued: " << value << endl;
        return value;
    }
};

int main() {
    MyQueue myQueue;
    int choice, data;

    while (1) {
        cout << "1. Enqueue 2. Dequeue 3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to enqueue: ";
                cin >> data;
                myQueue.enqueue(data);
                break;
            case 2:
                myQueue.dequeue();
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
