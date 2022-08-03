#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;

int lcs2(vector<int> &a, vector<int> &b) {
  //write your code here
  int m = a.size();
  int n = b.size();
  int arr [m+1][n+1];
  for(int i=0; i<= m; i++){
    for(int j=0;j<= n;j++){
        if (i == 0 || j == 0)
            arr[i][j] = 0;

        else if (a[i - 1] == b[j - 1])
            arr[i][j] = arr[i - 1][j - 1] + 1;

        else
            arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
    }
  }
  return arr[m][n];
}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }

  size_t m;
  cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    cin >> b[i];
  }

  cout << lcs2(a, b) << endl;
}
