#include <bits/stdc++.h>

const int MOD = 1000000007;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to))
#define _sort(a) sort(a.begin(), a.end())
#define _sortd(a) sort(a.rbegin(), a.rend())
#define reverse(s) reverse(s.begin(), s.end())
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

template<class T>
T max(vector<T> &v) {
  return *max_element(v.begin(), v.end());
}

template<class T>
T min(vector<T> &v) {
  return *min_element(v.begin(), v.end());
}

int main() {
  int n;
  cin >> n;

  int count = n;
  for (int i = 1; i <= n; ++i) {
    string s = to_string(i);
    bool unlucky = false;

    for (int j = 0; j < s.length(); ++j) {
      if (s[j] == '7') {
        count--;
        unlucky = true;
        break;
      }
    }
    if (!unlucky) {
      stringstream stringstream;
      stringstream << oct << i;
      string t = stringstream.str();

      for (int j = 0; j < t.length(); ++j) {
        if (t[j] == '7') {
          count--;
          break;
        }
      }
    }
  }

  cout << count << endl;
}