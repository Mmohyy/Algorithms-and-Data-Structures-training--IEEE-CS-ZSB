//problem link: leetcode.com/problems/climbing-stairs/

#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fir=1,sec=1,res=0;
    for(int i=0;i<n-1;i++){
        res=fir+sec;
        fir=sec;
        sec=res;
    }
    cout<< res;
}
