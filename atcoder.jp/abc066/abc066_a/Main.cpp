#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  vector<int> n;
  for (int i = 0; i < 3; ++i) {
    int a;
    cin >> a;
    n.push_back(a);
  }

  sort(n);
  cout << n[0] + n[1] << endl;
}