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
  int n, a, b;
  cin >> n >> a >> b;
  int count = 0;
  for (int i = 1; i <= n; i++) {
    string s = to_string(i);
    int sum = 0;
    for (char c : s) {
      sum += (c - '0');
    }
    if (a <= sum && sum <= b) {
      count += i;
    }
  }
  cout << count << endl;
}