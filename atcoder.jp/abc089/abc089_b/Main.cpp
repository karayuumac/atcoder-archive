#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  char s[200];
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'Y') {
      cout << "Four" << endl;
      return 0;
    } else {
      continue;
    }
  }
  cout << "Three" << endl;
}
