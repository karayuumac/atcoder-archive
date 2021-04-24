#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define pi M_PI

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

  int size = *min_element(b.begin(), b.end()) - *max_element(a.begin(), a.end());

  cout << ((size + 1 >= 0) ? size + 1 : 0) << endl;
}