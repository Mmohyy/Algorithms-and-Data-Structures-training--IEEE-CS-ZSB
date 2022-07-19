#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a,int left, int right, int x) {

    if (left <= right){
        int mid = (left+right)/2;
        if(x < a[mid]){
            right = mid-1;
            return binary_search(a,left,right,x);
        }
        else if (x>a[mid]){
            left = mid+1;
            return binary_search(a,left,right,x);
        }
        else if(x == a[mid])
            return mid;
    }
    else
        return -1;
}
int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search(a,0,n-1, b[i]) << ' ';
  }
}
