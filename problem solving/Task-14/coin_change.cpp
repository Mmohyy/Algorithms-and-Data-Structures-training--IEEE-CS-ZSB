//problem link: leetcode.com/problems/coin-change/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;


int coinChange(vector<int>& coins, int amount) {
    vector<int> res(amount + 1, amount + 1);
    res[0] = 0;

    for (int i = 1; i < amount + 1; i++) 
        for (int j = 0; j < coins.size(); j++) 
            if (i - coins[j] >= 0) 
                res[i] = min(res[i], 1 + res[i - coins[j]]);       

    if (res[amount] == amount + 1) 
        return -1;

    return res[amount];
}    

int main(){
  int n,amount;
  cin>>n;
  vector<int> coins(n);
  for(int i=0;i<n;i++)
    cin>> coins[i];
  cin>> amount;
  cout << coinChange(coins,amount);
    
    return 0;
}
