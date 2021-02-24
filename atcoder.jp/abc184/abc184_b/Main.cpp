#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int n, x;
  cin >> n >> x;
  vector<char> v;
  rep(i, n) {
    char c;
    cin >> c;
    v.push_back(c);
  }

  rep(i, n) {
    if (v[i] == 'o') {
      x++;
    } else {
      if (x > 0) {
        x--;
      }
    }
  }

  cout << x << endl;
}