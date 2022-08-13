//problem link: leetcode.com/problems/longest-consecutive-sequence/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<set>
#include<map>
#include<unordered_set>
using namespace std;

 int longestConsecutive(vector<int>& nums) {
    unordered_set<int>s(nums.begin(), nums.end());
    int longest = 0;
    for(auto &n: s){

        if(!s.count(n - 1)){
            int length = 1;
            while(s.count(n + length))
                length++;
            longest = max(longest, length);
        }

    }
    return longest;
}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    cout << longestConsecutive(v);
}

