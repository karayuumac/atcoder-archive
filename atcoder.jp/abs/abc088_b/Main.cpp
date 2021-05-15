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
  load(n, a);
  sort(a.rbegin(), a.rend());

  int alice = 0;
  int bob = 0;
  for (int i = 0; i < a.size(); i++) {
    if (i % 2 == 0) {
      alice += a[i];
    } else {
      bob += a[i];
    }
  }
  cout << alice - bob << endl;
}