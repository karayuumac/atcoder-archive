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
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  // a, b, c (差 b - a) => b + c, a + c, a + b (差 a - b) => 2a + b + c, a + 2b + c, a + b + 2c (差 b - a)
  // 2a + 3b + 3c, 3a + 2b + 3c, 3a + 3b + 2c
  if (k % 2 == 1) {
    cout << b - a << endl;
  } else {
    cout << a - b << endl;
  }
}