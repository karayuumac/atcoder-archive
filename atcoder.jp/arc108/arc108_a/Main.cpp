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

/// x * y = nとなるような正の整数(x, y)の組
vector<pair<int, int>> pair_of_divisor(int n) {
  vector<pair<int, int>> v;
  for(int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      v.emplace_back(i, n / i);
    }
  }
  return v;
}

signed main() {
  int s, p;
  cin >> s >> p;

  const auto d = pair_of_divisor(p);
  bool canMake = false;
  for (auto pair : d) {
    if (pair.first + pair.second == s) {
      canMake = true;
    }
  }
  if (canMake) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}