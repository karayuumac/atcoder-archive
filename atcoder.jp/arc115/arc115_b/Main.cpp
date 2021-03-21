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
  int n;
  cin >> n;

  int c[501][501];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      c[i][j] = a;
    }
  }

  int ans[2][501];

  int a_0_0 = INFINITY;
  for (int j = 0; j < n; j++) {
    a_0_0 = min(a_0_0, c[0][j]);
  }
  ans[0][0] = a_0_0;
  for (int j = 0; j < n; j++) {
    if (c[0][j] - a_0_0 >= 0) {
      ans[1][j] = c[0][j] - a_0_0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i = 1; i < n; i++) {
    int s = 0;
    for (int j = 0; j < n; j++) {
      if (j == 0) {
        s = c[i][j] - ans[1][j];
      } else {
        if (c[i][j] - ans[1][j] != s) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
    ans[0][i] = s;
  }

  cout << "Yes" << endl;
  rep(i, 2) {
    rep(j, n) {
      if (j != n - 1) {
        cout << ans[i][j] << " ";
      } else {
        cout << ans[i][j] << endl;
      }
    }
  }
}