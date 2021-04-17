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
  vector<int> a, b;
  load(n, a);
  load(m, b);

  unordered_set<int> ans;
  for (int i : a) {
    bool flag_1 = true;
    for (int j : b) {
      if (i == j) {
        flag_1 = false;
        break;
      }
    }
    if (flag_1) {
      ans.insert(i);
    }
  }
  for (int i : b) {
    bool flag_2 = true;
    for (int j : a) {
      if (i == j) {
        flag_2 = false;
      }
    }
    if (flag_2) {
      ans.insert(i);
    }
  }

  vector<int> _ans(ans.begin(), ans.end());
  sort(_ans.begin(), _ans.end());
  for (int i = 0; i < _ans.size(); i++) {
    if (i != (_ans.size() - 1)) {
      cout << _ans[i] << " ";
    } else {
      cout << _ans[i];
    }
  }
  cout << endl;
}