#include <iostream>
using namespace std;

int chut(int n, int r)
{
    int total=1;
    for(int i=0; i<r; i++)
    {
        total *= n - i;  
        total /= i + 1;  
    }
    return total;
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int t=1;
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<n-i; k++)
        {
            cout << " ";
        }
        for(int k=0; k<t; k++)
        {
            cout<<chut(i,k)<<" ";
        }
        cout<<endl;
        t++;
    }
    return 0;
}