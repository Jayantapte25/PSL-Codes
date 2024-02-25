// code for checking if a number is a power of another number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m,pro=1;
    cout << "Enter the number of rows: ";
    cin >> n >> m;
    int jaya=1;
    for(int i=1; i<m; i++)
    {
        pro=1;
        for(int j=0; j<n; j++)
        {
            pro=pro*i;
        }
        if(pro==m)
        {
            cout << "Yesu"<<endl;
            jaya=0;
            break;
        }
    }
    if(jaya==1)
    {
        cout << "Nou"<<endl;
    }
    return 0;
}