#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  string s, t;
  cin >> s >> t;

  int count = 0;
  rep(i, s.length()) {
    if (s[i] != t[i]) {
      count++;
    }
  }
  
  cout << count << endl;
}