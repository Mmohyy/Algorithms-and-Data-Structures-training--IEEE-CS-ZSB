//problem link: leetcode.com/problems/longest-palindromic-substring/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;

void plaindrome(string s,int l,int r, string &res){

   while(l>=0 && r <s.length() && s[l]==s[r]){
        if(r-l+1 > res.length()){
            res = s.substr(l,r-l+1);
        }
      l--;
      r++;
   }
}

string longestPalindrome(string s){
    string res;
    for(int i = 0; i< s.length();i++ ){
       plaindrome(s,i,i,res);   //call for odd
       plaindrome(s,i,i+1,res); //call for even
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    cout << longestPalindrome(s);
}
