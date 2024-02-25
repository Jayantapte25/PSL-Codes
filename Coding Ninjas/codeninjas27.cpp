//Climb Stairs (Recursive) - Problem in which we have to find the number of ways in which we can climb the stairs if we can take 1 or 2 steps at a time.

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int countWaysToClimbStairs(int N) {
    if (N <= 1) {
        return 1;  // Base case: There's one way to climb 0 or 1 stair.
    }
    
    return countWaysToClimbStairs(N - 1) + countWaysToClimbStairs(N - 2);
}

int main()
{
    int N;
    cout << "Enter the number of stairs: ";
    cin >> N;

    int ways = countWaysToClimbStairs(N);

    cout << "Number of distinct ways to climb " << N << " stairs: " << ways << endl;

    return 0;
}