#include <iostream>
#include <vector>
using namespace std;

vector<int> optimal_summands(int n) {
  vector<int> summands;

    if (n>1){
        int temp=n;
        for(int i=1;i<n;i++){
            if(temp >2*i){
                summands.push_back(i);
                temp-=i;
            }
            else{
                summands.push_back(temp);
                break;
            }
        }
    }
    else
        summands.push_back(1);
  return summands;
}

int main() {
  int n;
  cin >> n;
  vector<int> summands = optimal_summands(n);
  cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    cout << summands[i] << ' ';
  }
}
