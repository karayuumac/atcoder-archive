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

int diff(int n) {
  return (10 - n % 10) == 10 ? 0 : (10 - n % 10);
}

int main() {
  vector<int> v;
  load(v, 5);

  // 一番最後にする物(=待ち時間がもっとも長いもの)を選ぶ
  int index = -1, ma = 0;
  for (int i = 0; i < 5; ++i) {
    int dif = diff(v[i]);
    if (ma < dif) {
      index = i;
      ma = dif;
    }
  }

  int sum = 0;
  for (int i = 0; i < 5; ++i) {
    if (i == index) {
      sum += v[i];
    } else {
      sum += v[i] + diff(v[i]);
    }
  }
  p(sum);
}