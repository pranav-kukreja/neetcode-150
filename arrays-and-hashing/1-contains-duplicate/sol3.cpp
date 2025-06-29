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
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (s.find(nums[i]) == s.end())
                s.insert(nums[i]);
            else
                return true;
        }
        return false;
    }
};