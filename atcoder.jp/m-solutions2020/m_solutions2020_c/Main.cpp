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
  int n, k;
  cin >> n >> k;
  vector<int> scores;
  load(n, scores);

  for (int i = k; i < n; i++) {
    if (scores[i] > scores[i - k]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}