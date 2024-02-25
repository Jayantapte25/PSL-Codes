#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int c=1,m=n,k;

    for(int i=0; i<n; i++)
    {
        k=0;
        for(int k=0; k<m; k++)
        {
            cout<<" ";
        }
        m--;
        for(int j=0; j<c; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        c=c+2;
    }
    int g=2,h=(n*2)-2;
    for(int i=0; i<n; i++)
        {
            k=0;
            for(int k=0; k<g; k++)
            {
                cout<<" ";
            }
            g++;
            for(int j=1; j<h; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            h--;
            h--;
        }
}