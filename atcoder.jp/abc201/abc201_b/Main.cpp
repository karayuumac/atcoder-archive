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
  vector<pair<int, string>> v;
  rep(i, n) {
    string s;
    int height;
    cin >> s >> height;
    v.emplace_back(height, s);
  }

  sort(v.begin(), v.end(), [](const pair<int, string>& a1, const pair<int, string>& a2) -> bool {
    return (a1.first > a2.first);
  });
  cout << v[1].second << endl;
}