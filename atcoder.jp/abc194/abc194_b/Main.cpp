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

  vector<int> a;
  vector<int> b;
  rep(i, n) {
    int s, t;
    cin >> s >> t;
    a.push_back(s);
    b.push_back(t);
  }

  int m = INFINITY;

  rep(i, n) {
    rep(j, n) {
      if (i != j) {
        m = min(m, max(a[i], b[j]));
      } else {
        m = min(m, a[i] + b[i]);
      }
    }
  }

  cout << m << endl;
}