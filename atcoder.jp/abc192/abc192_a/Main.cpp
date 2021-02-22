#include<bits/stdc++.h>
using namespace std;

#define REP(i, n) for(ll i = 0; i < ll(n); i++)

int main() {
  int x;
  cin >> x;
  if (x % 100 == 0) {
    cout << "100" << endl;
  } else {
    cout << (x + 100) / 100 * 100 - x << endl;
  }
}