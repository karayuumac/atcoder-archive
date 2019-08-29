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
  const int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
  const int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

  int h, w;
  cin >> h >> w;
  char table[50][50];
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> table[i][j];
    }
  }

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (table[i][j] == '#') {
        cout << "#";
        continue;
      }

      int count = 0;
      for (int k = 0; k < 8; ++k) {
        int x = i + dx[k];
        int y = j + dy[k];

        if (x < 0 || x >= h) continue;
        if (y < 0 || y >= w) continue;

        if (table[x][y] == '#') {
          count++;
        }
      }

      cout << count;
    }
    cout << endl;
  }
}