#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  char x, y;
  cin >> x >> y;
  
  if (x - y > 0) {
    cout << ">" << endl;
  } else if (x - y == 0) {
    cout << "=" << endl;
  } else {
    cout << "<" << endl;
  }
}