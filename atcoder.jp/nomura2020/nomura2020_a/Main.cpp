#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  
  cout << c * 60 + d - (a * 60 + b) - e << endl;
}