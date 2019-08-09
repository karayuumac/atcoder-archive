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
  int n;
  int a, b;
  
  cin >> n;
  if (n == 1) {
    cout << "Hello World" << endl;
  } else {
    cin >> a;
    cin >> b;
    cout << a + b << endl;
  }
}