#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[300000];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int m = 0;
  int c = 0;
  for (int j = 0; j < n; ++j) {
    if (a[j] < k) {
      m = max(m, a[j]);
      if (m == a[j]) {
        c = j;
      }
    }
  }

  if (m == 0) {
    cout << -1 << endl;
  } else {
    cout << c + 1 << endl;
  }
}
