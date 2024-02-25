#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,x;
    vector <int> v;

    cout << "Enter the number of elements in an array: ";
    cin >> n;

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);        
    }

    v.pop_back();
    v.pop_back();

    cout << "Doubled values in the array: ";
    for (int i = 0; i < v.size(); i++)
    {
      //  v[i] = v[i] * 2;
        cout << v[i] << " ";
    }

    return 0;
}