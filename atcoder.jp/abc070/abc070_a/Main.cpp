#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  string s;
  cin >> s;

  if (s[0] == s[2]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}