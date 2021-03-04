#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)

#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)

signed main() {
  int n;
  string s;
  cin >> n >> s;

  vector<char> vc;

  char c = '0';
  rep(i, n) {
    if (c != s[i]) {
      c = s[i];
      vc.push_back(s[i]);
    }
  }

  cout << vc.size() << endl;
}