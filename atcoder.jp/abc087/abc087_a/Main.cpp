#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int x, a, b;
  cin >> x;
  cin >> a;
  cin >> b;

  cout << (x - a) % b << endl;
}