#include <iostream>
using namespace std;

int get_change(int m) {
  return (m/10)+ ((m%10)/5)+ (m%5);
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
