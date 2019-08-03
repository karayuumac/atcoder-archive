#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  if (s[0] == t[2] && s[1] == t[1] && s[2] == t[0]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}