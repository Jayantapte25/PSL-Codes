//code for converting excel column name to number
//AB - 28

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        string sa;
        cin >> sa;
        int na = sa.length();
        int sum = 0;

        for (int i = 0; i < na; ++i)
        {
            sum = sum * 26 + (sa[i] - 'A' + 1);
        }
        cout << sum << endl;
    return 0;
}
