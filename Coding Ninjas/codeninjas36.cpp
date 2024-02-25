#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int temp4=a[0][0];
    for(int j=0; j<2; j++)
    {
        a[j][0]=a[j+1][0];
    }
    for(int j = 0; j < 2; j++)
    {
        a[2][j]=a[2][j+1];   
    }
    for(int j = 2; j > 0; j--)
    {
        a[j][2]=a[j-1][2];   
    }

    a[0][2]=a[0][1];
    a[0][1]=temp4;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}