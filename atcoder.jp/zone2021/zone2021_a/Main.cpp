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
  string s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s.substr(i, 4) == "ZONe") {
      count++;
    }
  }
  cout << count << endl;
}