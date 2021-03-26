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

/// x が素数かどうか
bool is_prime(int x) {
  for (int i = 2; i * i <= x; i++) {
    if (x % i != 0) {
      continue;
    } else {
      return false;
    }
  }
  return true;
}

signed main() {
  int x;
  cin >> x;

  for (int i = x; i <= 1e10; i++) {
    if (is_prime(i)) {
      cout << i << endl;
      return 0;
    }
  }
}