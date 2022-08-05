// problem link: leetcode.com/problems/palindromic-substrings/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;

void plaindrome(string s,int l,int r, int &res){

   while(l>=0 && r <s.length() && s[l]==s[r]){
      res++;
      l--;
      r++;
   }
}

int countSubstrings(string s){
    int res=0;
    for(int i = 0; i< s.length();i++ ){
       plaindrome(s,i,i,res);   //call for odd
       plaindrome(s,i,i+1,res); //call for even
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    cout<<countSubstrings(s);
}
