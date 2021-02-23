#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b) {
    cout << "Takahashi" << endl;
  } else if (a < b) {
    cout << "Aoki" << endl;
  } else {
    if (c == 0) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  }
}