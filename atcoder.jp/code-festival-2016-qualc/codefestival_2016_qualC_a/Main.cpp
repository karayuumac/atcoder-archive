#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
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
  string s;
  cin >> s;

  int c = -1 , f = -1;
  rep(i, s.length()) {
    if (s[i] == 'C') {
      c = i;
    } else if (s[i] == 'F') {
      f = i;
    }
  }
  
  if (c != -1 && f != -1 && c < f) {
    p("Yes");
  } else {
    p("No");
  }
}