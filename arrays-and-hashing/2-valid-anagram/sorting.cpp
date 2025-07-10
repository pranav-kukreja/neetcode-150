#include <iostream>
#include <algorithm>
using namespace std;
bool isAnagram(){
    string s,t; 
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)return true;
    return false;
}