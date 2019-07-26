#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, a;
  cin >> N >> a;

  // ここにプログラムを追記
  for (int i = 0; i < N; ++i) {
    string op;
    int b;
    cin >> op >> b;

    if (op == "+") {
      a += b;
    } else if (op == "-") {
      a -= b;
    } else if (op == "*") {
      a *= b;
    } else {
      if (b == 0) {
        cout << "error" << endl;
        break;
      } else {
        a /= b;
      }
    }
    cout << i + 1 << ":" << a << endl;
  }
}
