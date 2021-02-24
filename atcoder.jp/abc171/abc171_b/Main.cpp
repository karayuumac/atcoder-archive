#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v;
  rep(i, n) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());
  int sum = 0;
  rep(i, k) {
    sum += v[i];
  }

  cout << sum << endl;
}