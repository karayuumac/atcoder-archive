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

int sum(int n) {
  return n * (n + 1) / 2;
}

signed main() {
  int a, b, c;
  cin >> a >> b >> c;

  int sum_a = sum(a) % 998244353;
  int sum_b = sum(b) % 998244353;
  int sum_c = sum(c) % 998244353;

  cout << ((sum_a * sum_b) % 998244353 * sum_c) % 998244353 << endl;
}