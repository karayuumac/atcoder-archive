#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define pi M_PI

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
  int n, d, h;
  cin >> n >> d >> h;
  vector<pair<int, int>> bl;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    bl.emplace_back(a, b);
  }
  double mi = 1e9;
  for (int i = 0; i < n; i++) {
    double grad = ((double) h - (double) bl[i].second) / ((double) d - (double) bl[i].first);
    mi = min(mi, grad);
  }
  double ans = max(h - mi * d, 0.0);
  cout << ans << endl;
}