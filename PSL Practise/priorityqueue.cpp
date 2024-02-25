#include<iostream>
using namespace std;

void enqueue(int arr[], int priority[], int data, int p, int &n) {
    int i;

    // Find the appropriate position to insert the new data based on priority
    for (i = n - 1; i >= 0; i--) {
        if (priority[i] <= p) {
            break;
        }
        arr[i + 1] = arr[i];
        priority[i + 1] = priority[i];
    }

    // Insert the new data at the correct position
    arr[i + 1] = data;
    priority[i + 1] = p;

    // Increment the number of elements in the queue
    n++;
}

void dequeue(int arr[], int priority[], int &n) { // Removed '&' from parameter n
    for (int i = 0; i < n ; i++) { // Updated loop termination condition
        arr[i] = arr[i + 1];
        priority[i] = priority[i + 1];
    }
    n--; // Decrement n since an element is removed
}


int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int arr[n];
    int priority[n];

    cout << "Enter the data and priority for each node:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] >> priority[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (priority[i] > priority[j]) {
                int temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            }
        }
    }

    while (1) {
        cout << "Enter 1 for enqueue, 2 for dequeue, 3 for exit: ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            int data, p;
            cout << "Enter the data and priority: ";
            cin >> data >> p; // Corrected the input statement
            enqueue(arr, priority, data, p, n);
        }
        else if (choice == 2) {
            dequeue(arr, priority, n);
        }
        else {
            break;
        }
    }

    return 0;
}
