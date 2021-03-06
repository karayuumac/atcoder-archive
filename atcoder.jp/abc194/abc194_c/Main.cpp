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

  vector<int> a;
  load(n, a);

  sort(a.begin(), a.end());

  int sum = 0;
  rep(i, n) {
    sum += a[i] * a[i];
  }

  int temp = 0;
  rep(i, n) {
    temp += a[i];
  }

  cout << (n - 1) * sum -  (temp * temp - sum) << endl;
}