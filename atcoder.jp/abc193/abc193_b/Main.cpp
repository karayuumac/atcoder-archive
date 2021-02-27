#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int n;
  cin >> n;

  int m = INFINITY;
  bool canBuy = false;
  rep(i, n) {
    int a, p, x;
    cin >> a >> p >> x;
    if (x - 0.5 < a) {
      continue;
    } else {
      canBuy = true;
      m = min(m, p);
    }
  }

  if (canBuy) {
    cout << m << endl;
  } else {
    cout << -1 << endl;
  }
}