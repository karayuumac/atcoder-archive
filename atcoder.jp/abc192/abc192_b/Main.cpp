#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define REP(i, n) for(ll i = 0; i < ll(n); i++)

int main() {
  string s;

  cin >> s;
  REP(i, s.length()) {
    if ((i + 1) % 2 == 1) {
      if (!islower(s[i])) {
        cout << "No" << endl;
        return 0;
      }
    } else {
      if (!isupper(s[i])) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}