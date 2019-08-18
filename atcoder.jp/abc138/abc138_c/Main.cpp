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
  int n;
  cin >> n;
  vector<double> v;
  load(v, n);

  int mi = min(v);
  vector<double> w;
  for (int i = 0; i < n; ++i) {
    w.push_back(v[i] - mi);
  }
  sort(w);

  double mean = 0;
  for (int i = 1; i < n; ++i) {
    if (i == 1) {
      mean = (w[i] + w[i - 1]) / 2.0;
    } else {
      mean = (mean + w[i]) / 2.0;
    }
  }
  mean += mi;

  printf("%.6lf", mean);
}