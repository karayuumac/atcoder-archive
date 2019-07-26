#include <bits/stdc++.h>

using namespace std;

int ctoi(const char c) {
  if ('0' <= c && c <= '9') return (c - '0');
  return -1;
}

int main() {
  int n, k;
  cin >> n;
  cin >> k;

  int d = 1;
  for (int i = 0; i < n; ++i) {
    if (d * 2 < d + k) {
      d *= 2;
    } else {
      d += k;
    }
  }
  cout << d<< endl;
}
