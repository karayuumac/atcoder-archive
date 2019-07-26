#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 0;
  for (int i = 0; i < n; ++i) {
    int l, r;
    cin >> l >> r;
    for (int j = l; j <= r; ++j) {
      count++;
    }
  }

  cout << count << endl;
}
