//problem link: leetcode.com/problems/top-k-frequent-elements/

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

vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();

    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
        m[nums[i]]++;

    vector<vector<int>> buckets(n + 1);
    for(auto it = m.begin(); it != m.end(); it++)
        buckets[it->second].push_back(it->first);

    vector<int> result;

    for(int i = n; i >= 0; i--) {
        if (result.size() >= k)
            break;
        if (!buckets[i].empty())
            result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }

    return result;
}
int main(){

    int n,k;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    cin >> k;
    vector<int> res = topKFrequent(v,k);
    for(int i = 0; i < k; i++)
        cout << res[i] << '\t';
}
