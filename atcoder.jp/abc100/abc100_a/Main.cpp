#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (2 * max(a, b) - 1 <= 16) {
    cout << "Yay!" << endl;
  } else {
    cout << ":(" << endl;
  }
}