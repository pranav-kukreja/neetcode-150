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
    static bool comp(string &a, string &b)
    {
        if (a.size() < b.size())
            return true;
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        sort(strs.begin(), strs.end(), comp);
        vector<vector<string>> ans;
        int i = 0;
        while (i < strs.size())
        {
            int j = i;
            unordered_map<string, vector<int>> mp;
            while (j < strs.size() && strs[j].size() == strs[i].size())
            {
                string t = strs[j];
                sort(t.begin(), t.end());
                mp[t].push_back(j);
                j++;
            }
            for (auto z : mp)
            {
                vector<string> v;
                for (auto y : z.second)
                {
                    v.push_back(strs[y]);
                }
                ans.push_back(v);
            }
            i = j;
        }
        return ans;
    }
};