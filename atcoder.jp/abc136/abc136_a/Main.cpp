#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >>c;

  cout << max(c - (a - b), 0) << endl;
}