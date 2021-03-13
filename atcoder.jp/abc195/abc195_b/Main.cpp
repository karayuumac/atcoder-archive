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
  double a, b, w;
  cin >> a >> b >> w;

  bool canDo_max = false;
  bool canDo_min = false;

  int _max = floor(w * 1000 / a);
  int _min = ceil(w * 1000 / b);

  FOR(i, 0, _max) {
    if (a <= (w * 1000 - i * a) / (_max - i) && (w * 1000 - i * a) / (_max - i) <= b) {
      canDo_max = true;
    }
  }
  FOR(i, 0, _min) {
    if (a <= (w * 1000 - i * b) / (_min - i) && (w * 1000 - i * b) / (_min - i) <= b) {
      canDo_min = true;
    }
  }
  if (canDo_max && canDo_min) {
    cout << _min << " " << _max << endl;
  } else {
    cout << "UNSATISFIABLE" << endl;
  }
}