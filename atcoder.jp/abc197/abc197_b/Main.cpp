#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template <typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;

  bool s[101][101];

  rep(i, h) {
    rep(j, w) {
      char c;
      cin >> c;
      if (c == '#') {
        s[i][j] = true;
      } else {
        s[i][j] = false;
      }
    }
  }

  int count = 0;
  if (!s[x - 1][y - 1]) {
    count++;
  }
  for (int j = y; j <= w - 1; j++) {
    if (!s[x - 1][j]) {
      count++;
    } else {
      break;
    }
  }
  for (int j = (y - 2); j >= 0; j--) {
    if (!s[x - 1][j]) {
      count++;
    } else {
      break;
    }
  }
  for (int i = x; i <= h - 1; i++) {
    if (!s[i][y - 1]) {
      count++;
    } else {
      break;
    }
  }
  for (int i = (x - 2); i >= 0; i--) {
    if (!s[i][y - 1]) {
      count++;
    } else {
      break;
    }
  }

  cout << count << endl;
}