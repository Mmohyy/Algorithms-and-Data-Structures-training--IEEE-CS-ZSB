//problem link: leetcode.com/problems/contains-duplicate/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<set>
#include<map>
#include<unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
   unordered_set<int>us;
    int n = nums.size();
   for(int i=0;i<n;i++){
        if(us.find(nums[i])!=us.end())
                return true;
        us.insert(nums[i]);
   }
   return false ;
}

int main(){
    int n;
    cin >> n;
    vector<int> vv(n);
    for(int i=0;i<n;i++)
        cin >>vv[i];
    cout<< containsDuplicate(vv) << endl;
    return 0;
}
