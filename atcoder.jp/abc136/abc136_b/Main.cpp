#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int n;
  cin >> n;

  int count = 0;
  for (int i = 1; i <= n; ++i) {
    if (to_string(i).length() % 2 == 1) {
      count++;
    }
  }
  cout << count << endl;
}