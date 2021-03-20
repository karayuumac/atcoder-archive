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

/// x と y の最大公約数
int gcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return gcd(y, x % y);
  }
}

signed main() {
  int k;
  cin >> k;

  int sum = 0;
  FOR(i, 1, k) {
    FOR(j, 1, k) {
      FOR(l, 1, k) {
        sum += gcd(gcd(i, j), l);
      }
    }
  }
  cout << sum << endl;
}