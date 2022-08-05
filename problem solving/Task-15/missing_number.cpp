//problem link: leetcode.com/problems/missing-number/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int res = nums.size();
    for(int i=0;i< nums.size();i++)
        res+= (i - nums[i]);
    return res;

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    cout << missingNumber(v);
    return 0;
}
