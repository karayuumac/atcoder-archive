#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template<typename T>
void load(int n, vector <T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int n, m;
  cin >> n >> m;
  vector<int> tall;
  load(n, tall);

  set<pair<int, int>> paths;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    paths.insert({a - 1, b - 1});
  }

  bool ans[100000];
  rep(i, n) {
    ans[i] = true;
  }
  for (pair<int, int> p : paths) {
    if (tall[p.first] < tall[p.second]) {
      ans[p.first] = false;
    } else if (tall[p.first] == tall[p.second]) {
      ans[p.first] = false;
      ans[p.second] = false;
    } else {
      ans[p.second] = false;
    }
  }

  int sum = 0;
  rep(i, n) {
    if (ans[i]) {
      sum++;
    }
  }
  cout << sum << endl;
}