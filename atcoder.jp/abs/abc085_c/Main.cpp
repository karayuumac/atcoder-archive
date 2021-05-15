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
  int n, y;
  cin >> n >> y;

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n - i; j ++) {
      int k = n - i - j;
      if (k >= 0) {
        if (i * 1000 + j * 5000 + k * 10000 == y) {
          cout << k << " " << j << " " << i << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}