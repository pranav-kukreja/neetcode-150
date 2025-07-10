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
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        int n = s.size();
        unordered_map<char, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return mp1 == mp2;
    }
};