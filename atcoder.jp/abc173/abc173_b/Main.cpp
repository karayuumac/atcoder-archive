#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)


int main() {
  int n;
  cin >> n;


  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;

  rep(i, n) {
    string s;
    cin >> s;
    if (s == "AC") {
      ac++;
    } else if (s == "WA") {
      wa++;
    } else if (s == "TLE") {
      tle++;
    } else {
      re++;
    }
  }

  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}