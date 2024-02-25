//longest increasing subsequence

#include <iostream>
using namespace std;

int main()
{
    int n, a[100],count=0,max=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        count=0;
        cout<<a[i]<<" :";
        int u=a[i];
        for(int j=i+1; j<n; j++)
        {
            if(u<a[j])
            {
                cout<<a[j]<<" ";
                u=a[j];
                count++;
            }
        }
        cout<<endl;
        if(count>max)
        {
            max=count;
        }
    }
    return 0;
}