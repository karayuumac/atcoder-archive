#include <iostream>
#include <stdio.h>
#include <cmath>

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORN(i, a, b) for (int i = a; i <= b; i++)

using namespace std;

//
// Created by karayuu on 2019-01-02.
//

int main() {
    int n, m;
    cin >> n >> m;

    int w[50] = {};
    FORN(i, 1, m) {
        int a, b;
        cin >> a >> b;
        w[a]++;
        w[b]++;
    }

    FORN(i, 1, n) {
        cout << w[i] << endl;
    }
}