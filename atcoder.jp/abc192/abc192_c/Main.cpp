#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define repd(i, n) for(ll i = ll(n - 1); i >= 0; i--)

#define FOR(i, a, b) for(ll i = a; i <= ll(b); i++)

vector<char> to_vector(const string& s) {
  vector<char> vc;
  for (char c : s) {
    vc.push_back(c);
  }
  return vc;
}

ll to_ll(vector<char> vc) {
  ll sum = 0;
  rep(i, vc.size()) {
    sum += (vc[i] - '0') * pow(10, (vc.size() - 1) - i);
  }
  return sum;
}

ll g1(const string& s) {
  vector<char> vc = to_vector(s);
  sort(vc.begin(), vc.end(), [](char a, char b) {
    return a > b;
  });
  return to_ll(vc);
}

ll g2(const string& s) {
  vector<char> vc = to_vector(s);
  sort(vc.begin(), vc.end());
  return to_ll(vc);
}

int main() {
  ll n;
  int k;
  cin >> n >> k;

  FOR(i, 1, k) {
    string s = to_string(n);
    n = g1(s) - g2(s);
  }
  cout << n << endl;
}