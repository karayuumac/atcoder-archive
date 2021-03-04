#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)

template <typename T>
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
  vector<int> x;
  load(n, x);

  int sum = 0;
  rep(i, n) {
    sum += x[i];
  }
  int a = ceil(sum / (double) n);
  int b = floor(sum / (double) n);

  int ans_a = 0;
  rep(i, n) {
    ans_a += pow(a - x[i], 2);
  }
  int ans_b = 0;
  rep(i, n) {
    ans_b += pow(b - x[i], 2);
  }

  cout << min(ans_a, ans_b) << endl;
}