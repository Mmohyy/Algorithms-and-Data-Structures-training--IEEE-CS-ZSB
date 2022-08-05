//problem link: leetcode.com/problems/sum-of-two-integers/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
   while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = (unsigned)carry << 1;
    }
    return a;
}

int main(){
    int a,b;
    cin >> a >> b ;
    cout << getSum(a,b);
    return 0;
}
