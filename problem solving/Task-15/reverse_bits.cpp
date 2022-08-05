//problem link: leetcode.com/problems/reverse-bits/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

 uint32_t reverseBits(uint32_t n) {
    uint32_t res=0;
    for(int i=0;i<32;i++){
        int bit = (n >> i) & 1;
        res = res | (bit << 31-i);
    }
    return res;
}

int main(){
    uint32_t n;
    cin >> n;
    cout << reverseBits(n);
    return 0;
}
