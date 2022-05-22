#include <iostream>
using namespace std;
class Solution
{
public:
    int climbStairs(int n)
    {
        int stairs[n + 1], i;
        stairs[1] = 1;
        stairs[2] = 2;
        for (i = 3; i <= n; i++)
            stairs[i] = stairs[i - 1] + stairs[i - 2];
        return stairs[n];
    }
};
int main()
{
    Solution S;
    cout << S.climbStairs(1) << " ";
    cout << S.climbStairs(2) << " ";
    cout << S.climbStairs(3) << " ";
    cout << S.climbStairs(4) << " ";
    cout << S.climbStairs(5) << " ";
    cout << S.climbStairs(6) << " ";
}