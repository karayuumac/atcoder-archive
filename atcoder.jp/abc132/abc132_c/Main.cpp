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
  vector<int> d;
  load(n, d);

  sort(d.begin(), d.end());

  // 1 4 4 6 7 9
  if (n % 2 == 0) {
    cout << d[n / 2] - d[n / 2 - 1] << endl;
  } else {
    cout << 0 << endl;
  }
}