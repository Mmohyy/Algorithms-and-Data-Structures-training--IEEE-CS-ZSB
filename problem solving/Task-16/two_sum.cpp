//problem link: leetcode.com/problems/two-sum/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int>ump;
    vector<int> res;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int diff = target - nums[i];
        if(ump.find(diff) != ump.end()){
            res.push_back(ump[diff]);
            res.push_back(i);
            break;
        }
        else
            ump.insert({nums[i],i});
    }
    return res;
}
int main(){
    int n,target;
    cin >> n;
    vector<int> vv(n);
    for(int i=0;i<n;i++)
        cin >> vv[i];
    cin >> target;
    vector<int> res = twoSum(vv,target);
    for(int i=0;i<res.size();i++)
        cout << res[i] << '\t';
}
