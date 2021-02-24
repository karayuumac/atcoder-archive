#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int n, s, d;
  cin >> n >> s >> d;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    if (x < s && y > d) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}