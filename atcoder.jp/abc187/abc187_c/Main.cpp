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
 * set に element が存在するかどうか返す
 * @example
 * set<int> v = {1, 2, 3, 4}; <br>
 * cout << (find(v, (int) 1) ? "Yes" : "No") << endl;
 */
template<typename T>
bool find(unordered_set<T> vec, T element) {
  auto itr = find(vec.begin(), vec.end(), element);
  auto index = distance(vec.begin(), itr);
  return index < vec.size();
}

signed main() {
  int n;
  cin >> n;
  vector<string> vec;
  load(n, vec);
  unordered_set<string> h(vec.begin(), vec.end());

  for (const auto& s : vec) {
    if (h.count('!' + s)) {
      cout << s << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
}