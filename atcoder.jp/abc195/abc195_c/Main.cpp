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

  int ans = max((int) 0, n - (int) pow(10, 3) + 1) + max((int) 0, n - (int) pow(10, 6) + 1)
    + max((int) 0, n - (int) pow(10, 9) + 1) + max((int) 0, n - (int) pow(10, 12) + 1)
            + max((int) 0, n - (int) pow(10, 15) + 1);

  cout << ans << endl;
}