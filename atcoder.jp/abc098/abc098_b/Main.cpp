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
  string s;
  cin >> n >> s;

  int result = 0;
  for (int i = 1; i < n; ++i) {
    string first = s.substr(0, i);
    string second = s.substr(i, s.length() - i);

    int count = 0;
    for (char c = 'a'; c <= 'z'; c++) {
      bool f_exist = false, s_exist = false;
      for (char cf : first) {
        if (cf == c) f_exist = true;
      }
      for (char cs : second) {
        if (cs == c) s_exist = true;
      }
      if (f_exist && s_exist) count++;
    }
    result = max(result, count);
  }
  p(result);
}