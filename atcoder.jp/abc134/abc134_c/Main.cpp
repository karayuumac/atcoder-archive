#include <bits/stdc++.h>

using namespace std;

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
#define sort(a) sort(a.begin(), a.end())

int main() {
  int n;
  cin >> n;

  vector<int> a;

  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    a.push_back(m);
  }

  vector<int> sorted;
  copy(a,sorted);
  sort(sorted);
  int max = sorted[n - 1];
  int smax = sorted[n - 2];

  for (int i = 0; i < n; ++i) {
    int pre = a[i];

    if (pre == max) {
      cout << smax << endl;
    } else {
      cout << max << endl;
    }
  }
}