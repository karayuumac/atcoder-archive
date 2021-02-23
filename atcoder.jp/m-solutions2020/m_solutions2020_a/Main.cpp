#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int x;
  cin >> x;
  if (400 <= x && x <= 599) {
    cout << "8" << endl;
  } else if (600 <= x && x <= 799) {
    cout << "7" << endl;
  } else if (800 <= x && x <= 999) {
    cout << "6" << endl;
  } else if (1000 <= x && x <= 1199) {
    cout << "5" << endl;
  } else if (1200 <= x && x <= 1399) {
    cout << "4" << endl;
  } else if (1400 <= x && x <= 1599) {
    cout << "3" << endl;
  } else if (1600 <= x && x <= 1799) {
    cout << "2" << endl;
  } else {
    cout << "1" <<endl;
  }
}