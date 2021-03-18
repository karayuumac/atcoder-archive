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

/// a の約数
set<int> divisor(int a) {
  set<int> s;
  for(int i = 1; i * i <= a; i++) {
    if (a % i == 0) {
      s.insert(i);
      s.insert(a / i);
    }
  }
  return s;
}
signed main() {
  int n;
  cin >> n;
  set<int> a = divisor(n);

  for (int i : a) {
    cout << i << endl;
  }
}