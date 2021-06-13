#include <bits/stdc++.h>

using namespace std;

#define int long long

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template<typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a >= 0 && b >= 0) {
    if (a > b) {
      cout << ">" << endl;
    } else if (a < b) {
      cout << "<" << endl;
    } else {
      cout << "=" << endl;
    }
  } else if (a < 0 && b < 0) {
    if (c % 2 == 0) {
      if (a > b) {
        cout << "<" << endl;
      } else if (a < b) {
        cout << ">" << endl;
      } else {
        cout << "=" << endl;
      }
    } else {
      if (a > b) {
        cout << ">" << endl;
      } else if (a < b) {
        cout << "<" << endl;
      } else {
        cout << "=" << endl;
      }
    }
  } else if (a >= 0 && b < 0) {
    if (c % 2 == 0) {
      if (abs(a) == abs(b)) {
        cout << "=" << endl;
      } else if (a < abs(b)) {
        cout << "<" << endl;
      } else {
        cout << ">" << endl;
      }
    } else {
      cout << ">" << endl;
    }
  } else {
    if (c % 2 == 0) {
      if (abs(a) == abs(b)) {
        cout << "=" << endl;
      } else if (abs(a) < b) {
        cout << "<" << endl;
      } else {
        cout << ">" << endl;
      }
    } else {
      cout << "<" << endl;
    }
  }
}