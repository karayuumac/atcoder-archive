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
  vector<int> a, b;
  load(n, a);
  load(n, b);

  vector<int> c;
  c.emplace_back(a[0] * b[0]);
  vector<int> max_of_a;
  max_of_a.emplace_back(a[0]);
  for (int i = 1; i < n; i++) {
    max_of_a.emplace_back(max(max_of_a[i - 1], a[i]));
  }
  for (int i = 1; i < n; i++) {
    c.emplace_back(max(c[i - 1], max_of_a[i] * b[i]));
  }
  rep(i, n) {
    cout << c[i] << endl;
  }
}