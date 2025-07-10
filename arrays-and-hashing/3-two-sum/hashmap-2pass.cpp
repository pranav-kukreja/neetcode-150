// 10 july 2025
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
    vector<int> twoSum(vector<int> &A, int T)
    {
        int n = A.size();
        vector<int> ans;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[A[i]].push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            int x = T - A[i];
            if (mp.find(x) == mp.end())
                continue;
            else if (mp[x][0] != i)
            {
                ans = {i, mp[x][0]};
                return ans;
            }
            else if (mp[x].size() > 1)
            {
                ans = {i, mp[x][1]};
                return ans;
            }
            else
                continue;
        }
        return ans;
    }
};