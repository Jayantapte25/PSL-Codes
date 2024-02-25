#include <iostream>
using namespace std;

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    try {
        double result = divide(10.0, 0.0);
        cout << "Result: " << result << endl;
    } catch (const exception& ex) {
        cout << "Exception: " << ex.what() << endl;
    }

    return 0;
}
