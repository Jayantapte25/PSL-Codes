//Code to find the pair of elements in an array whose sum is equal to a given number

#include <iostream>
using namespace std;

int main()
{
  int n, p,a[100];
  cout << "Enter the NO. of array";
  cin >> n;
  cout<<"Enter the sum value";
  cin>>p;

   for (int i = 0; i < n; i++)
   {
      cin>>a[i];
   }

   for(int i=0; i<n; i++)
   {
      for(int j=i+1; j<n; j++)
      {
         if(a[i]+a[j]==p)
         {
            cout<<a[i]<<" ";
            cout<<a[j];
         }
      }
      cout<<endl;
   }
}