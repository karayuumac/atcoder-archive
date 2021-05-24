#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long

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
  for (int i = 1; i <= 50000; i++) {
    if (floor((double) i * 1.08) == n) {
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
}