#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  cout << max(max(a + b, a - b), a * b) << endl;
}