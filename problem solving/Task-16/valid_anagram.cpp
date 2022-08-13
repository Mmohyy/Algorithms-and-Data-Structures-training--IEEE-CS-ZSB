//problem link:leetcode.com/problems/valid-anagram/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdbool.h>
#include<set>
#include<map>
#include<unordered_set>
using namespace std;

 bool isAnagram(string s, string t) {
     if(s.size()!= t.size())
        return false;
     sort(s.begin(), s.end());
     sort(t.begin(), t.end());
     if(s != t)
        return false;
     return true;
}

int main(){
    string s,t;
    cin >> s >> t;
    cout << isAnagram(s,t) << endl;
    return 0;
}
