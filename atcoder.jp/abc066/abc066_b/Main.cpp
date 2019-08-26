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

bool check(const string &s) {
  return s.substr(0, s.length() / 2) == s.substr(s.length() / 2, s.length() / 2);
}

int main() {
  string s;
  cin >> s;

  for (int i = 2; i < s.length(); i += 2) {
    int length = s.length() - i;
    string s1 = s.substr(0, length / 2);
    string s2 = s.substr(length / 2, length / 2);

    if (s1 == s2) {
      p(length);
      return 0;
    }
  }
}