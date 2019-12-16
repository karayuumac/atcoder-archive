#include <bits/stdc++.h>

const int MOD = 1000000007;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
#define _sort(a) sort(a.begin(), a.end())
#define _sortd(a) sort(a.rbegin(), a.rend())
#define reverse(s) reverse(s.begin(), s.end())
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

template<class T>
T max(vector<T> &v) {
  return *max_element(v.begin(), v.end());
}

template<class T>
T min(vector<T> &v) {
  return *min_element(v.begin(), v.end());
}

void py(bool isUpper = false) {
  if (isUpper) {
    p("YES");
  } else {
    p("Yes");
  }
}

void pn(bool isUpper = false) {
  if (isUpper) {
    p("NO");
  } else {
    p("No");
  }
}

int main() {
  int n;
  cin >> n;

  tuple<int, int> p[n];
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    p[i] = make_tuple(a, b);
  }

  double length = 0;
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i; j < n; ++j) {
      int x1, x2, y1, y2;
      x1 = get<0>(p[i]);
      y1 = get<1>(p[i]);
      x2 = get<0>(p[j]);
      y2 = get<1>(p[j]);
      length = max(length, sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)));
    }
  }

  printf("%.5lf", length);
}