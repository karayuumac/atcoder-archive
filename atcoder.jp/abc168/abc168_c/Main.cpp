#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template<typename T>
void load(int n, vector <T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double deg_a = (h * 30 + m / 2.0) * M_PI / 180;
  double deg_b = m * 6 * M_PI / 180;

  double ans = sqrt(a * a + b * b - 2 * a * b * cos(abs(deg_a - deg_b)));
  printf("%.10lf\n", ans);
}