#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[1000000], b[1000000];

  for (int i = 0; i < n + 1; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  long c = 0;
  for (int i = 0; i < n; ++i) {
    int left = min(a[i], b[i]);
    c += left;
    a[i] -= left;
    b[i] -= left;

    int right = min(a[i + 1], b[i]);
    c += right;
    a[i + 1] -= right;
    b[i] -= right;
  }

  cout << c << endl;
}