//minimum number of coins required to make a given sum

#include <iostream>
using namespace std;

int main()
{
    int n, a[100],pro=0,x;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the Value of X ";
    cin >> x;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]>a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        while(pro<=x && pro+a[i]<=x)
        {
            pro = pro+a[i];
            cout<<a[i]<<endl;
        }
    }

    return 0;
}