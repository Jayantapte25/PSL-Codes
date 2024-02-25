//code for finding the minimum energy required to climb a set of stairs

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[100], n, land = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> a[i];
    }

    int i = 0; // Initialize i to 0
    while (i < n - 1) // Use a while loop to traverse the stairs
    {
        int jump1 = i + 1; 
        int jump2 = i + 2; 

        int energy1 = abs(a[i] - a[jump1 - 1]); // Calculate energy for the 1st jump
        int energy2 = abs(a[i] - a[jump2 - 1]); // Calculate energy for the 2nd jump

        if (energy1 <= energy2)
        {
            land += energy1; // Add the energy for the 1st jump to the total
            i = jump1; // Update i to the new position
        }
        else
        {
            land += energy2; // Add the energy for the 2nd jump to the total
            i = jump2; // Update i to the new position
        }
    }

    cout << "The total energy lost is: " << land << endl; // Correct the output message
    return 0;
}
