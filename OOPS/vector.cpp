#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    v.pop_back();
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    v.insert(v.begin(), 5);
    v.insert(v.begin()+1, 15);

    vector <int> v2(4, 100);
    swap(v, v2);
    cout<<endl;
    for(auto element:v)
    {
        cout << element << " ";
    }
    cout<<endl;
    for(auto element:v2)
    {
        cout << element << " ";
    }

    vector <int> v3;

    v3.push_back(45);
    v3.push_back(20);
    v3.push_back(366);

    sort(v3.begin(), v3.end());
    cout<<endl;
    for(auto element:v3)
    {
        cout << element << " ";
    }
}