#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int c = 0;
  for (char i : s) {
    if (i == '1') {
      c++;
    }
  }

  cout << c << endl;
}
