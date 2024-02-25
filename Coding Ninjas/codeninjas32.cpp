//Maximum sum of non-adjacent elements

#include <iostream>
using namespace std;

int main()
{
    int n, a[100], sum=0, max=0, k=0;
    cout << "Enter the number of elements";
    cin >> n;
    cout << "Enter the elements";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
       k = i+2;
       int l= a[i];
       sum = l;
       for(int j=k; j<n; j=j+2)
       {
           sum = sum + a[j];  
       }
       if(sum > max)
        {
            max = sum;
        } 
    }
    cout << max;
}