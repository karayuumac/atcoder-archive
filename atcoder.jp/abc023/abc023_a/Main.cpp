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

/**
 * char型の数字をint型に変換します.
 * ただし入力値が数字でない場合は-1を返します.
 * @param _char int型に変換したい数字の文字(1文字).
 * @return int型に変換した数字.ただし数字以外が入力されたときは-1.
 */
int toInt(const char single_number) {
  if ('0' <= single_number && single_number <= '9') {
    return single_number - '0';
  }
  return -1;
}

int main() {
  string s;
  cin >> s;

  int sum = 0;
  for (char c : s) {
    sum += toInt(c);
  }
  cout << sum << endl;
}