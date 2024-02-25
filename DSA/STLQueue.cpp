#include <iostream>
#include <queue>

using namespace std; // Add this line

int main() {
    queue<int> myqueue; // No need for ::std

    // Enqueue elements into the queue
    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);

    // Check if the queue is empty
    if (myqueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Get the size of the queue
    cout << "Queue size: " << myqueue.size() << endl;

    // Access the front and back elements
    cout << "Front element: " << myqueue.front() << endl;
    cout << "Back element: " << myqueue.back() << endl;

    // Dequeue elements from the queue
    myqueue.pop();

    cout << "Queue size after dequeuing: " << myqueue.size() << endl;

    return 0;
}
