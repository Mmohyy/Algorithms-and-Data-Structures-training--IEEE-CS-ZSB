//problem link: leetcode.com/problems/single-number/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    int n,res;
    cin >> n;
    vector<int> vv(n);
    for(int i=0;i<n;i++)
        cin>>vv[i];
    for(int i=0;i<n;i++)
        res = res ^ vv[i];
    cout<< res;
}
