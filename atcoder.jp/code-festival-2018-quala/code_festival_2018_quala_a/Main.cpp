#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
//#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
#define sort(a) sort(a.begin(), a.end())
#define p(s) cout << (s) << endl

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
  int a, b, c, s;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> s;

  int sum = a + b + c;
  if (sum <= s && s <= sum + 3) {
    p("Yes");
  } else {
    p("No");
  }
}