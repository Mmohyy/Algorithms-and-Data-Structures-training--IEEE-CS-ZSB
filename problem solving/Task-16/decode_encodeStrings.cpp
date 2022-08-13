//problem link: leetcode.com/problems/longest-consecutive-sequence/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<set>
#include<map>
#include<unordered_set>
using namespace std;

vector<string> decode(string s) {
    vector<string> result;

    int i = 0;
    while (i < s.size()) {
        int j = i;
        while (s[j] != '#') {
            j++;
        }
        int length = stoi(s.substr(i, j - i));
        string str = s.substr(j + 1, length);
        result.push_back(str);
        i = j + 1 + length;
    }

    return result;
}

string encode(vector<string>& strs) {
    string result = "";

    for (int i = 0; i < strs.size(); i++) {
        string str = strs[i];
        result += to_string(str.size()) + "#" + str;
    }

    return result;
}
