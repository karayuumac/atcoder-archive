#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int left = a + b;
  int right = c + d;

  if (right > left) {
    cout << "Right" << endl;
  } else if (right < left) {
    cout << "Left" << endl;
  } else {
    cout << "Balanced" << endl;
  }
}