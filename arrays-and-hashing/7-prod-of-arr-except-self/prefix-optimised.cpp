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
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        // B -> vector : B[i] -> product of elements to the right of index i
        vector<int> B(n, 1);
        for (int i = n - 2; i >= 0; i--)
        {
            B[i] = B[i + 1] * nums[i + 1];
        }
        // p : running prod of elt to left fo index i
        int p = 1;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(p * B[i]);
            p *= nums[i];
        }
        return ans;
    }
};