//problem link: leetcode.com/problems/group-anagrams/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
using namespace std;

string getKey(string str) {
    vector<int> count(26);
    for (int i = 0; i < str.size(); i++)
        count[str[i] - 'a']++;

    string key = "";
    for (int i = 0; i < 26; i++)
        key.append(to_string(count[i] + 'a'));

    return key;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> ump;
    for (int i = 0; i < strs.size(); i++) {
        string key = getKey(strs[i]);
        ump[key].push_back(strs[i]);
    }

    vector<vector<string>> result;
    for (auto it = ump.begin(); it != ump.end(); it++) {
        result.push_back(it->second);
    }
    return result;
}
