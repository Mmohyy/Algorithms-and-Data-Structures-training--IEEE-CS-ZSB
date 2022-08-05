// problem link: leetcode.com/problems/min-cost-climbing-stairs/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost){
    cost.push_back(0);
    for(int i=cost.size()-3;i>=0;i--)
        cost[i] += min(cost[i+1],cost[i+2]);
    return min(cost[0],cost[1]);
}

int main(){
    int n;
    cin>>n;
    vector<int> cost(n);
    for(int i=0;i<n;i++)
        cin>>cost[i];
    cout<< minCostClimbingStairs(cost);
}
