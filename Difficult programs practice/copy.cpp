#include <iostream>
using namespace std;

class jayant {
    int j, x; // Changed the order of x and j

public:
    jayant(int n) {
        j = n;
        x = 0; // Initialize x to 0 in the constructor
    }

    jayant(const jayant &obj) {
        j = obj.j; // Copy the value of j from the source object
        x = obj.x; // Copy the value of x from the source object
    }

    void display() {
        cout << j << endl;
        cout << x << endl; // You should also display x
    }
};

int main() {
    jayant j1(10);
    jayant j2(j1);
    j1.display();
    j2.display();
    return 0;
}
