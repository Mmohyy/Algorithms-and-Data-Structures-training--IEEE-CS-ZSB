#include <iostream>
using namespace std;

int get_change(int money){

    int coins[]={1,3,4};
    int n = money+1;
    int min_change[n];
    int num=0;
    min_change[0]=0;

    for(int i=1;i<n;i++){
       min_change[i]=10000;
       for(int j=0;j<3;j++){
            if(i >= coins[j]){
                num = min_change[i-coins[j]]+1;

                if(num < min_change[i])
                    min_change[i]=num;
            }
       }
    }
    return min_change[money];
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
