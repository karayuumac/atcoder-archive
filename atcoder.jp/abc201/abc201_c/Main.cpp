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
  string s;
  cin >> s;

  int count = 0;
  vector<int> need;
  for (int i = 0; i <= 9; i++) {
    if (s[i] == 'o') {
      need.emplace_back(i);
    }
  }
  for (int i = 0; i <= 9999; i++) {
    bool used[10] = {false};
    stringstream ss;
    ss << setw(4) << setfill('0') << i;

    string pass(ss.str());
    bool canMake = true;
    bool isUsed = true;
    for (int j = 0; j < 4; j++) {
      if (s[pass[j] - '0'] == 'x') {
        canMake = false;
      }
      used[pass[j] - '0'] = true;
    }
    for (int j : need) {
      if (!used[j]) {
        isUsed = false;
        break;
      }
    }
    if (canMake && isUsed) {
      count++;
    }
  }
  cout << count << endl;
}