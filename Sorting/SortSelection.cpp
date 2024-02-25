#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {3,5,7,2,9,1}, sum;

    for(int i=0; i<6; i++)
    {
        sum=i;
        for(int j=i+1; j<6; j++)
        {
            if(a[sum]>a[j])
            {
                sum=j;
            }
        }   
        swap(a[i],a[sum]);
    }
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
}