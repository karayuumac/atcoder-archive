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

/**
 * 負の数に対応済みのMod計算
 */
ll mod(ll val, ll m) {
  ll res = val % m;
  if (res < 0) {
    res += m;
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int c[27] = {0};

  for (int i = 0; i < s.length(); ++i) {
    int d = s[i] - 'a';
    c[d]++;
  }

  ll sum = 1;
  for (int e : c) {
    sum = sum * (e + 1) % MOD;
  }
  p(mod(sum - 1, MOD));
}