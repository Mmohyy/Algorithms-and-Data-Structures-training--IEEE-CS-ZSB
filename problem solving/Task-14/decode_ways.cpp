// problem link: leetcode.com/problems/decode-ways/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;

 int numDecodings(string s) {
    if (s[0] == '0')
        return 0;

    int n = s.size();
    vector<int> ans(n + 1);
    ans[0] = ans[1] =1;

    for (int i = 2; i <= n; i++) {
        int one = stoi(s.substr(i - 1, 1));
        if (one >= 1 && one <= 9)
            ans[i] += ans[i - 1];

        int ten = stoi(s.substr(i - 2, 2));
        if (ten >= 10 && ten <= 26)
            ans[i] += ans[i - 2];
    }
    return ans[n];
}
int main(){
    string s;
    cin >> s;
    cout << numDecodings(s);
}
