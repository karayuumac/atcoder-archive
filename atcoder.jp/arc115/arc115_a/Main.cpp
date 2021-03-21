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
  int n, m;
  cin >> n >> m;
  vector<string> s;
  load(n, s);

  int even = 0;
  int odd = 0;
  rep(i, n) {
    int one = 0;
    rep(j, s[i].length()) {
      if (s[i][j] == '1') {
        one++;
      }
    }
    if (one % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  cout << even * odd << endl;
}