//this code is for finding the next greater element in an array

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[100],tmp,s;
    cout<<"Enter the number of elements"<<endl;
    cin >> s;
    for(int i=0;i<s;i++)
    {
        cin >> a[i];
    }
    int p=1;
    for(int i=0; i<s; i++)
    {
        tmp = INT_MAX;
        for(int j=i+1; j<s; j++)
        {
            if(tmp>a[j] && a[i]<a[j])
            {
                tmp = a[j];
            }
        }
        if(tmp==INT_MAX)
        {
            cout<<"-1" << " ";
            continue;
        }
        a[i]=tmp;  
        cout<<a[i] << " ";      
    }
    return 0;
}