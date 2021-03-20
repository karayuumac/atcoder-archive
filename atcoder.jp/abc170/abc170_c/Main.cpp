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

/**
 * vec に element が存在するかどうか返す
 * @example
 * vector<int> v = {1, 2, 3, 4}; <br>
 * cout << (find(v, (int) 1) ? "Yes" : "No") << endl;
 */
template<typename T>
bool find(vector<T> vec, T element) {
  auto itr = find(vec.begin(), vec.end(), element);
  auto index = distance(vec.begin(), itr);
  return index < vec.size();
}

signed main() {
  int x, n;
  cin >> x >> n;
  vector<int> v;
  load(n, v);

  int m = INFINITY;
  bool state = false;
  FOR(i, 0, 100) {
    if (!find(v, x + i)) {
      m = min(m, x + i);
      state = true;
    }
    if (!find(v, x - i)) {
      m = min(m, x - i);
      state = true;
    }
    if (state) {
      cout << m << endl;
      return 0;
    }
  }
}