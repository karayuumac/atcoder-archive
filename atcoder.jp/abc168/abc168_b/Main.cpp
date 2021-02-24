#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int k;
  string s;
  cin >> k >> s;

  if (s.length() <= k) {
    cout << s << endl;
  } else {
    rep(i, s.length()) {
      if (i <= k - 1) {
        cout << s[i];
      } else {
        break;
      }
    }
    cout << "..." << endl;
  }
}