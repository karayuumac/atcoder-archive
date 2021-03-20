#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template<typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int x, y;
  cin >> x >> y;

  if (x == 1 && y == 1) {
    cout << 1000000 << endl;
  } else {
    int sum = 0;
    if (x == 1) {
      sum += 300000;
    }
    if (y == 1) {
      sum += 300000;
    }
    if (x == 2) {
      sum += 200000;
    }
    if (y == 2) {
      sum += 200000;
    }
    if (x == 3) {
      sum += 100000;
    }
    if (y == 3) {
      sum += 100000;
    }
    cout << sum << endl;
  }
}