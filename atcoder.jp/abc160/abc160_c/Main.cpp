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
  int k, n;
  cin >> k >> n;
  vector<int> a;
  load(n, a);

  int _long = 0;
  rep(i, n) {
    if (i != 0) {
      _long = max(_long, a[i] - a[i - 1]);
    }
  }
  _long = max(_long, k - a[n - 1] + a[0]);
  cout << k - _long << endl;
}