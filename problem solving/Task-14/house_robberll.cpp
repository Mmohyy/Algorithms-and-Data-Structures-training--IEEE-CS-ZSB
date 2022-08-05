// problem link: leetcode.com/problems/house-robber-ii

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int robl(vector<int>& nums,int Start,int End){
    int r1= 0,r2= 0 ;
        for (int i= Start; i<=End; i++){
            int temp = max(r2 , r1+nums[i]) ;
            r1 = r2 ;
            r2 = temp ;
        }
        return r2 ;
}

int rob(vector<int> &nums){
    if(nums.size()==1)
        return nums[0];
    int a = robl(nums,0,nums.size()-2);
    int b = robl(nums,1,nums.size()-1);
    return max(a,b);
}

int main(){
    int n;
    cin>>n;
    vector<int> cost(n);
    for(int i=0;i<n;i++)
        cin>>cost[i];
    cout<<rob(cost);
}
