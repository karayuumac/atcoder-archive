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
  vector<int> l;
  load(n, l);

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (l[i] == l[j] || l[i] == l[k] || l[j] == l[k]) {
          continue;
        } else {
          vector<int> pairs = { l[i], l[j], l[k] };
          sort(pairs.begin(), pairs.end());
          if (pairs[2] < pairs[1] + pairs[0]) {
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;
}