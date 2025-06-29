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
        unordered_map<int, bool> mp;
        for (auto z : nums)
        {
            if (mp.find(z) == mp.end())
            {
                mp[z] = true;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};