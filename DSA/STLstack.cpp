#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> mystack; 

    // Push elements onto the stack
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);

    // Check if the stack is empty
    if (mystack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Get the size of the stack
    cout << "Stack size: " << mystack.size() << endl;

    // Access the top element
    cout << "Top element: " << mystack.top() << endl;

    // Pop elements from the stack
    mystack.pop();
    mystack.pop();

    cout << "Stack size after popping: " << mystack.size() << endl;

    return 0;
}
