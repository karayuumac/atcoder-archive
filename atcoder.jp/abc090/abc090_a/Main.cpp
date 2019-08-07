#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  char a[3][3];

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 3; ++i) {
    cout << a[i][i];
  }
  cout << endl;
}