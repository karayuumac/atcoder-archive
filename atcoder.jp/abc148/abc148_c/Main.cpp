#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)

int gcd(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return gcd(y, x % y);
  }
}

int lcm(int x, int y) {
  int g = gcd(x, y);
  return x * y / g;
}

signed main() {
  int a, b;
  cin >> a >> b;
  cout << lcm(a, b) << endl;
}