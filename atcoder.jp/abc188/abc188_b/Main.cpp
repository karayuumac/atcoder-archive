#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int n;
  cin >> n;
  vector<int> a, b;
  rep(i, n) {
    int c;
    cin >> c;
    a.push_back(c);
  }
  rep(i, n) {
    int c;
    cin >> c;
    b.push_back(c);
  }

  int ans = 0;
  rep(i, n) {
    ans += a[i] * b[i];
  }
  if (ans == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}