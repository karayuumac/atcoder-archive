#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define pi M_PI

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
  vector<string> s;
  load(n, s);

  sort(s.begin(), s.end());

  int _max = 0;
  int size = 1;
  string buff = s[0];
  vector<string> ans;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == buff) {
      size++;
    } else {
      if (_max < size) {
        // 更新された場合
        ans = vector<string>();
        _max = size;
        ans.emplace_back(buff);
      } else if (_max == size) {
        // 同着の場合
        ans.emplace_back(buff);
      }
      buff = s[i];
      size = 1;
    }
  }
  if (_max < size) {
    // 更新された場合
    ans = vector<string>();
    _max = size;
    ans.emplace_back(buff);
  } else if (_max == size) {
    // 同着の場合
    ans.emplace_back(buff);
  }

  sort(ans.begin(), ans.end());
  for (const string &str : ans) {
    cout << str << endl;
  }
}