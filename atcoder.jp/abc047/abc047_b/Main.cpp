#include <bits/stdc++.h>

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
  int w, h, n;
  cin >> w >> h >> n;

  bool d[120][120] = {false};
  rep(i, n) {
    int x, y, a;
    cin >> x >> y >> a;
    if (a == 1) {
      rep(j, x) {
        rep(k, h) {
          d[j][k] = true;
        }
      }
    } else if (a == 2) {
      for (int j = x; j < w; ++j) {
        rep(k, h) {
          d[j][k] = true;
        }
      }
    } else if (a == 3) {
      rep(j, w) {
        rep(k, y) {
          d[j][k] = true;
        }
      }
    } else if (a == 4) {
      rep(j, w) {
        for (int k = y; k < h; ++k) {
          d[j][k] = true;
        }
      }
    }
  }

  int c = 0;
  rep(i, w) {
    rep(j, h) {
      if (!d[i][j]) {
        c++;
      }
    }
  }
  p(c);
}