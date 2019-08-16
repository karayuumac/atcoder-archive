#include <bits/stdc++.h>

const int MOD = 1000000007;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
#define sort(a) sort(a.begin(), a.end())
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
  int a, b, c;
  cin >> a >> b >> c;

  if (max({a, b, c}) == a) {
    p(1);
    if (b > c) {
      p(2);
      p(3);
    } else {
      p(3);
      p(2);
    }
  } else if (a > b && a < c) {
    p(2);
    p(3);
    p(1);
  } else if (a > c && a < b) {
    p(2);
    p(1);
    p(3);
  } else {
    if (b > c) {
      p(3);
      p(1);
      p(2);
    } else {
      p(3);
      p(2);
      p(1);
    }
  }
}