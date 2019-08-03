#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) {
    cout << "Possible" << endl;
  } else {
    cout << "Impossible" << endl;
  }
}