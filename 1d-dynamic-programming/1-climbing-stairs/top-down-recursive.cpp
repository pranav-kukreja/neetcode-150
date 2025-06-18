#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <list>
using namespace std;

class Solution
{
public:
    int f(int n, vector<int> &dp)
    {
        if (n < 0)
            return 0;
        if (dp[n] > 0)
            return dp[n];
        dp[n] = f(n - 1, dp) + f(n - 2, dp);
        return dp[n];
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        return f(n, dp);
    }
};