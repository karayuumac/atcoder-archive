#include <bits/stdc++.h>

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
  int a, b;
  cin >> a >> b;
  
  for (int c = 1; c <= 3; ++c) {
    if (a * b * c % 2 == 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}