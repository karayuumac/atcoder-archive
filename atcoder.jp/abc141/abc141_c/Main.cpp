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
  int n, k, q;
  cin >> n >> k >> q;

  int win[1000000] = {0};
  rep(i, q) {
    int a;
    cin >> a;
    win[a-1]++;
  }

  rep(i, n) {
    if (k - (q - win[i]) <= 0) {
      p("No");
    } else {
      p("Yes");
    }
  }
}