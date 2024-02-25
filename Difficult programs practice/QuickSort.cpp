#include <iostream>
#include <algorithm> 
using namespace std;

partition(int a[], int lb,int ub)
{ 
    int start = lb;
    int end = ub;
    int pivot = a[lb];

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start], a[end]);
        }
    }
    swap(a[end],a[lb]);
    return end;
}
quicksort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        quicksort(a,lb,loc);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int arr[] = {21, 13, 9, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}