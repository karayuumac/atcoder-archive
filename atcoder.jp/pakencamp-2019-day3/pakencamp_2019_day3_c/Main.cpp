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
  int n, m;
  cin >> n >> m;
  int a[101][101];

  rep(i, n) {
    rep(j, m) {
      int b;
      cin >> b;
      a[i][j] = b;
    }
  }

  int ans = 0;
  int ma = 0;
  rep(j, m) {
    FOR(k, j, m - 1) {
      rep(i, n) {
        ma += max(a[i][j], a[i][k]);
      }
      ans = max(ma, ans);
      ma = 0;
    }
  }
  cout << max(ma, ans) << endl;
}