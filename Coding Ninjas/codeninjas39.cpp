#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string a[100];
    int k;
    map <char, int> l;
    cout<<"Enter k: ";
    cin>>k;

    cout<<"Enter array elements: ";
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<k; i++)
    {
        int h = a[i].length();
        for(int j=0; j<h; j++)
        {
            l[a[i][j]]++;
        }
    }
    int g = l.size();
    cout<<g;
    return 0;
}