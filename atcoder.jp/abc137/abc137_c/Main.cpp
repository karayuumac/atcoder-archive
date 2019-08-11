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
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    sort(s);
    mp[s]++;
  }

  ll sum = 0;
  for (auto &p : mp) {
    ll i = p.second;
    sum += i * (i - 1) / 2;
  }
  p(sum);
}