#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;

int optimal_weight(int W, vector<int> &w) {

  int m = w.size();
  int res [m+1][W+1];

  for(int i=0;i<=m;i++)
      for(int j=0;j<=W;j++){
        if(i==0 || j==0)
            res[i][j]=0;
        else if(w[i-1]<= j)
            res[i][j] = std::max( w[i-1] + res[i-1][j-w[i-1]] , res[i-1][j]);
        else
            res[i][j] = res[i-1][j];
      }
   return res[m][W];
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}
