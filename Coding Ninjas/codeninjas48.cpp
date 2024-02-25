//code for max sum of two elements in an array such that no two elements are adjacent

#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int sum = 0, max = 0;
    for (int i=0; i<n; i++)
    {
        sum = 0;
        for(int j=i+2; j<n; j++)
        {
            sum = a[i] + a[j];
            if(sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max;   
}