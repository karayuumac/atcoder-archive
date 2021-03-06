#include <bits/stdc++.h>

using namespace std;

#define int long long int

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
  int a, b;
  cin >> a >> b;

  if ((a + b) >= 15 && b >= 8) {
    cout << "1" << endl;
  } else if ((a + b) >= 10 && b >= 3) {
    cout << "2" << endl;
  } else if ((a + b) >= 3) {
    cout << "3" << endl;
  } else {
    cout << "4" << endl;
  }
}