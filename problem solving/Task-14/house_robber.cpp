// problem link: leetcode.com/problems/house-robber/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums){
    int r1= 0,r2= 0 ;
        for (int i= 0; i<nums.size(); i++){
            int temp = max(r2 , r1+nums[i]) ;
            r1 = r2 ;
            r2 = temp ;
        }
    return r2 ;
}
int main(){
    int n;
    cin>>n;
    vector<int> cost(n);
    for(int i=0;i<n;i++)
        cin>>cost[i];

    cout<<rob(cost);

}
