#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  int x_a = abs(x - a);
  int x_b = abs(x - b);
  
  if (x_a > x_b) {
    cout << "B" << endl;
  } else {
    cout << "A" << endl;
  }
}