#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int n) {

  //write your code here
    for(int i=0;i<n;i++){
        int current =a[i],count =0;
        for(int j=0;j<n;j++)
            if(a[j]==current)
                count++;
        if(count > (n/2))
            return 1;
    }
    return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << get_majority_element(a,n) << '\n';
}
