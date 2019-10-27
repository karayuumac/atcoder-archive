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
  int a[100], c[100];
  for (int i = 1; i <= n; i++) {
    int d;
    cin >> d;
    a[i] = d;
  }

  // 全部食べた時の満足度の総数.
  int sum = 0;
  rep(i, n) {
    int d;
    cin >> d;
    sum += d;
  }

  for (int i = 1; i < n; i++) {
    int d;
    cin >> d;
    c[i] = d;
  }

  int before = a[1];
  for (int i = 2; i <= n; i++) {
    if (a[i] == before + 1) {
      sum += c[before];
    }
    before = a[i];
  }

  p(sum);
}