//If one element of a matrix is zero, make its whole row and column

#include <iostream>
using namespace std;

int main()
{
    int a[100][100],n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;

    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int p=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(a[i][j]==0)
           {
            for(int k=0;k<m;k++)
            {
                a[i][k]=0;
            }
            for(int k=0;k<n;k++)
            {
                a[k][j]=0;
            }
            p=1;
            break;
           }
        }
        if(p==1)
        {
            break;
        }
    }    

    cout<<"The matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}