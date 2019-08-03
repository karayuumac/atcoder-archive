#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  string n;
  cin >> n;
  
  if (n[0] == '9' || n[1] == '9') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}