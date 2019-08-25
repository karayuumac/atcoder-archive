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
  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> p, c;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    p.emplace_back(a, b);
  }
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    c.emplace_back(a, b);
  }

  for (auto person : p) {
    ll mi = 1e17;
    int num = 0;
    int index = 0;
    for (auto point : c) {
      num++;
      ll distance = abs(person.first - point.first) + abs(person.second - point.second);
      if (distance < mi) {
        mi = distance;
        index = num;
      }
    }
    p(index);
  }
}