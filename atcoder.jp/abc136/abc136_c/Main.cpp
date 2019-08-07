#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())
using namespace std;

template <class T>
void load(vector<T> &v, int n) {
  for (int i = 0; i < n; ++i) {
    T t;
    cin >> t;
    v.push_back(t);
  }
}

int main() {
  //解答閲覧後のコーディング
  int n;
  cin >> n;

  vector<int> h;
  load(h, n);

  for (int i = n - 2; i >= 0 ; --i) {
    if (h[i + 1] >= h[i]) {
      continue;
    } else if (h[i] - h[i + 1] == 1) {
      h[i]--;
      continue;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}