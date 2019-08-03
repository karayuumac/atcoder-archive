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
  int x, a, b;
  cin >> x >> a >> b;
  
  int n = -1 * a + b;
  if (n <= 0) {
    cout << "delicious" << endl;
  } else if (n > x) {
    cout << "dangerous" << endl;
  } else {
    cout << "safe" << endl;
  }
}