#include <bits/stdc++.h>

using namespace std;

bool isN(double x) {
  return x == (int) x;
}

int main() {
  int a, b;
  cin >> a >> b;

  if (isN((a + b) / 2.0)) {
    cout << (a + b) / 2 << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}