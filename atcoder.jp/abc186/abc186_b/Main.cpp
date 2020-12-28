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

int main() {
  int h, w;
  cin >> h >> w;

  int minimum = INFINITY;
  int a[101][101] = { 0 };

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      int in;
      cin >> in;
      a[i][j] = in;
      minimum = min(minimum, in);
    }
  }

  int count = 0;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      count += a[i][j] - minimum;
    }
  }

  cout << count << endl;
}