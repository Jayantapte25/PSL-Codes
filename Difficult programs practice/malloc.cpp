#include <iostream>
using namespace std;

int main()
{
    int *a, n;

    cout << "Enter the number of elements in an array: ";
    cin >> n;

    a = new int[n];
    //a= (int *)malloc(n * sizeof(int)); // C

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Doubled values in the array: ";
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * 2;
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}
