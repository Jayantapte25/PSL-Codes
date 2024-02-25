#include <iostream>
using namespace std;

int main()
{
    int n,pro=0;
    cout << "Enter the number of rows: ";
    cin >> n;
    int p=1;

    for(int i=1; i<n; i++)
    {
        pro=0;
        pro=i*i;
        if(pro==n)
        {
            cout << "true";
            p=0;
            break;
        }
    }
    if(p==1)
    {
        cout << "false";
    }
    return 0;
}