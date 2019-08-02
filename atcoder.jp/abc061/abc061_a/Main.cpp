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
  int a, b, c;
  cin >> a >> b >> c;

  if (a <= c && c <= b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}