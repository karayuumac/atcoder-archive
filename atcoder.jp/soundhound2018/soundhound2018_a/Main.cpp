#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
#define sort(a) sort(a.begin(), a.end())
#define p(s) cout << (s) << endl

typedef long long ll;
using namespace std;

template<class T>
void load(vector<T> &v, int n) {
  for (int i = 0; i < n; ++i) {
    T t;
    cin >> t;
    v.push_back(t);
  }
}

template <class T>
T max(vector<T> &v) {
  return *max_element(v.begin(), v.end());
}

template <class T>
T min(vector<T> &v) {
  return *min_element(v.begin(), v.end());
}

int main() {
  string x, y;
  cin >> x >> y;

  string a = x.substr(0, 1) + y.substr(0, 1);
  if (a == "SH") {
    p("YES");
  } else {
    p("NO");
  }
}