#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using namespace std;
int edit_distance(const string str1, const string str2) {
  //write your code here
  int m = str1.size();
  int n = str2.size();
  int D[m+1][n+1];

  for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0)
				D[i][j] = j;

			else if (j == 0)
				D[i][j] = i;

			else if (str1[i - 1] == str2[j - 1])
				D[i][j] = D[i - 1][j - 1];

			else
				D[i][j] = 1 + min( min(D[i][j - 1], D[i - 1][j]), D[i - 1][j - 1]);
		}
	}
	return D[m][n];
}

int main() {
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2) << endl;
  return 0;
}
