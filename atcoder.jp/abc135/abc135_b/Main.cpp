#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p;

  for (int i = 0; i < n; ++i) {
    int a = 0;
    cin >> a;
    p.push_back(a);
  }

  int c = 0;
  for (int i = 0; i < n; ++i) {
    if (p[i] != i + 1) {
      c++;
    }
  }

  if (c == 0 || c == 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}