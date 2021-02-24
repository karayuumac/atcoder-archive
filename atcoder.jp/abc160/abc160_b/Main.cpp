#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int x;
  cin >> x;

  cout << x / 500 * 1000 + (x - x / 500 * 500) / 5 * 5 << endl;
}