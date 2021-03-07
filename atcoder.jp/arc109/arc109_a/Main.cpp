#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template <typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;

  if (a > b) {
    if (a - b == 1) {
      cout << x << endl;
    } else {
      if (2 * x < y) {
        cout << (1 + 2 * (a - b - 1)) * x << endl;
      } else {
        cout << (a - b - 1) * y + x << endl;
      }
    }
  } else {
    if (3 * x < x + y) {
      cout << (2 * (b - a) + 1) * x << endl;
    } else {
      cout << (b - a) * y + x << endl;
    }
  }
}