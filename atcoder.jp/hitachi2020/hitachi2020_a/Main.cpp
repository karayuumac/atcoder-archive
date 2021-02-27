#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  string s;
  cin >> s;

  if (s.length() % 2 != 0) {
    cout << "No" << endl;
    return 0;
  } else {
    rep(i, s.length()) {
      if ((i % 2 == 0 && s[i] != 'h') || (i % 2 == 1 && s[i] != 'i')) {
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
  }
}