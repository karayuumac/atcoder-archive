#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int x, t;
  cin >> x >> t;
  if (x - t < 0) {
    cout << 0 << endl;
  } else {
    cout << x - t << endl;
  }
}