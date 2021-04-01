#include <bits/stdc++.h>

using namespace std;

#define int long long int

#define rep(i, n) for(int i = 0; i < (int) n; i++)
#define repd(i, n) for(int i = (int) (n - 1); i >= 0; i--)
#define FOR(i, a, b) for(int i = a; i <= (int) b; i++)
#define FORD(i, a, b) for(int i = a; i >= (int) b; i--)

template <typename T>
void load(int n, vector<T> &v) {
  rep(i, n) {
    T a;
    cin >> a;
    v.push_back(a);
  }
}

signed main() {
  int k;
  cin >> k;

  /*
   * AとBのペアを考えれば,Cは floor(k/AB) 個の候補が存在する.
   * よって以下のコードを書くことができる.
   */
  /*
  int count = 0;
  for (int a = 1; a <= k; a++) {
    for (int b = 1; b <= k; b++) {
      count += floor((double) k / ((double) a * (double) b));
    }
  }
  cout << count << endl;
  */
  /*
   * これで正解は出るが,計算量はO(N^2)であるから,間に合わない.
   * ここから改良する.まず,a * b > kの時点で組み合わせは無いので答えにはなり得ない.
   * よって,以下のコードを得る
   */
  int count = 0;
  for (int a = 1; a <= k; a++) {
    for (int b = 1; a * b <= k; b++) {
      count += floor((double) k / ((double) a * (double) b));
    }
  }
  cout << count << endl;
  /*
   * この計算量について考えてみよう.
   * aが1からkまで動くとき,bは1からk / aまで動く.
   * よって,計算量は, Sum(a=1->k)[k / a] = k * Sum(a=1->k)[1 / a] を考えることにより,
   * O(klog(k))である.よって十分高速に動作する.
   * ※ 1 + 1/2 + 1/3 + ... 1/n < log(n) は面積評価することにより証明できる.
   */
}