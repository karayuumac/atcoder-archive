#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

typedef long long ll;
using namespace std;

template<class T>
void load(vector<T> &v, int n) {
  for (int i = 0; i < n; ++i) {
    T t;
    cin >> t;
    v.push_back(t);
  }
}

int main() {
  int x, a;
  cin >> x >> a;
  if (x < a) {
    cout << 0 << endl;
  } else {
    cout << 10 << endl;
  }
}