#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


signed main() {
  int n;
  cin >> n;

  set<int> a;

  for (int i = 2; i * i <= n; i++) {
    for (int j = i*i; j <= n; j*=i) {
      a.insert(j);
    }
  }

  cout << n - a.size() << endl;
}