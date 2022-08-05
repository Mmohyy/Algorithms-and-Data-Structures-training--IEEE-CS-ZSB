//problem link: leetcode.com/problems/counting-bits/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n+1);
    ans[0] = 0;
    int offset=1;

    for(int i=1;i<= n;i++){
        if(offset*2 ==i) offset=i;
        ans[i]= 1 + ans[ i - offset];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    v= countBits(n);
    for(int i=0;i<=n;i++)
        cout<< v[i];
    return 0;
}
