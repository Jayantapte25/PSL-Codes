// to find if a matrix is symmetric or not:

#include <iostream>
using namespace std;

int main()
{
    int arr[100][100],r,c;
    int sum;

    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;

    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int p=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                p=0;
            }
        }
    }
    if(p==1)
    {
        cout<<"Symmetric";
    }
    else
    {
        cout<<"Not symmetric";
    }
}