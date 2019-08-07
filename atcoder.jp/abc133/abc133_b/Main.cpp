#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())
using namespace std;

template<class T>
void load(vector<T> &v, int n) {
  for (int i = 0; i < n; ++i) {
    T t;
    cin >> t;
    v.push_back(t);
  }
}

bool isN(double n) {
  return n == (int) n;
}

int main() {
  int n, d;
  cin >> n >> d;

  int x[20][20];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < d; ++j) {
      cin >> x[i][j];
    }
  }

  int count = 0;
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      float sq = 0;
      for (int k = 0; k < d; ++k) {
        sq += pow(x[i][k] - x[j][k], 2);
      }
      if (isN(sqrt(sq))) {
        count++;
      }
    }
  }

  cout << count << endl;
}