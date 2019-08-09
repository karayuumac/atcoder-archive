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
  string s;
  cin >> s;

  for (int i = 0; i < 3; ++i) {
    if (s[i] == '1') {
      s[i] = '9';
    } else {
      s[i] = '1';
    }
  }
  
  cout << stoi(s) << endl;
}