#include <bits/stdc++.h>

#define copy(from, to) copy(from.begin(), from.end(), back_inserter(to));
#define sort(a) sort(a.begin(), a.end())

using namespace std;

int main() {
  int r;
  cin >> r;
  
  string result;
  if (r < 1200) {
    result = "ABC";
  } else if (r < 2800) {
    result = "ARC";
  } else {
    result = "AGC";
  }
  
  cout << result << endl;
}