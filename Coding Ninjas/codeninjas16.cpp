//sort the array in descending order and then add the first k negative numbers  

#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cout << "Enter array size: ";
    cin >> n;

    int a[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout<<"Enter the K value";
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<k;i++)
    {
       if(a[i]<0)
       {
            a[i]=a[i]*(-1);
       }
       else 
       {
              a[i]=-a[i];
       }
    }
    int sum = 0;
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << sum;
    return 0;
}
