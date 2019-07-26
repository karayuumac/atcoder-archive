#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int A = a * n;
  int B = b;

  cout << min(A, B) << endl;
}