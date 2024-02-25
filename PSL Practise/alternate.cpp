#include <iostream>
using namespace std;

int main()
{
    int n,t[100];
    cout<<"Enter the elements: ";
    cin>>n;

    for(int j=0; j<n; j++)
    {
        cin>>t[j];
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    int i=0;
    while(i<n)
    {
        cout<<t[i]<<" ";
        i++;
        i++;
    }
    return 0;
}