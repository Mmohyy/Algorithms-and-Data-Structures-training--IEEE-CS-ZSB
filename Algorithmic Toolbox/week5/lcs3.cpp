#include <iostream>
#include <vector>

using std::vector;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
  //write your code here
  int an = a.size();
  int bn = b.size();
  int cn = c.size();
  int arr[an+1][bn+1][cn+1];
  for (int i = 0; i <= an; i++)
		for (int j = 0; j <= bn; j++)
			for (int k = 0; k <= cn; k++) {

				if (i == 0 || j == 0 || k == 0)
					arr[i][j][k] = 0;

				else if (a[i - 1] == b[j - 1] && a[i - 1] == c[k - 1])
					arr[i][j][k] = arr[i - 1][j - 1][k - 1] + 1;

				else
					arr[i][j][k] = std::max( std::max(arr[i - 1][j][k], arr[i][j - 1][k]), arr[i][j][k - 1]);
			}

    return arr[an][bn][cn];
}

int main() {
  size_t an;
  std::cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    std::cin >> a[i];
  }
  size_t bn;
  std::cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    std::cin >> b[i];
  }
  size_t cn;
  std::cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    std::cin >> c[i];
  }
  std::cout << lcs3(a, b, c) << std::endl;
}
