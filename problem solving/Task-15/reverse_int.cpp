//problem link: leetcode.com/problems/reverse-integer/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;


 int reverse(int x) {
    int res = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (res < INT_MIN / 10 || (res == INT_MIN / 10 && digit < -8)) {
            return 0;
        }
        res = res * 10 + digit;
    }
    return res;

}

int main(){
  int n;
  cin>>n;
  cout << reverse(n);

  return 0;
}
