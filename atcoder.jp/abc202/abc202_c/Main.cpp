#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template<typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int n;
  cin >> n;

  int p[100001] = {0};
  int q[100001] = {0};

  vector<int> a, b, c;
  rep(i, n) {
    int d;
    cin >> d;
    a.emplace_back(d);
    p[d]++;
  }
  load(n, b);
  load(n, c);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += p[b[c[i] - 1]];
  }
  cout << sum << endl;
}