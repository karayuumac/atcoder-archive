#include <bits/stdc++.h>

using namespace std;

template<class T>
void copy(vector<T> from, vector<T> to) {
  copy(from.begin(), from.end(), back_inserter(to));
}

template<class T>
void sort(vector<T> a) {
  sort(a.begin(), a.end());
}

template<class T>
void input_to(vector<T> a) {
  T a_i;
  cin >> a_i;
  a.push_back(a_i);
}

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  if (a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}