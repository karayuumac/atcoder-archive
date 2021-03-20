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
  load(n - 1, a);

  int sum = 0;
  for (int i = 1; i < n - 1; i++) {
    sum += min(a[i - 1], a[i]);
  }
  sum += a[0];
  sum += a[n - 2];
  cout << sum << endl;
}