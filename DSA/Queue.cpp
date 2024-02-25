#include <iostream>
using namespace std;

int front = 0, rear = 0; // Initialize front and rear
int queue[10];    // The array to represent the queue

void enqueue(int n) {
    if (rear == 10) {
        cout << "Queue is full. Cannot enqueue." << endl;
    } else {
        queue[rear] = n;
        rear++;
    }
}

void dequeue() {
    if (front == rear) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    }
    else
    {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
    }
}

void frontElement() {
    if (front == rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

int main() {
    int chat;
    while (true) {
        cout << "1. Enqueue - 2. Dequeue - 3. Front - 4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> chat;
        switch (chat) {
            case 1:
                int element;
                cout << "Enter the element to enqueue: ";
                cin >> element;
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                frontElement();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}
