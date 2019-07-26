#include <bits/stdc++.h>

using namespace std;

int ctoi(const char c) {
  if ('0' <= c && c <= '9') return (c - '0');
  return -1;
}

int main() {
  string s;
  cin >> s;

  int x = stoi(s);

  int sum = 0;
  for (char i : s) {
    sum += ctoi(i);
  }

  if (x % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

