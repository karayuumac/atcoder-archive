#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORN(i, a, b) for (int i = a; i <= b; i++)
#define P(s) cout << s << endl
#define PC(condition, _true, _false) if (condition) _true; else _false;
#define toInt(_char) _char - '0'

using namespace std;
//
// Created by karayuu on 2018-12-18.
//

int main() {
    char c;
    cin >> c;

    if (c == 'A') {
        P('T');
    } else if (c == 'T') {
        P('A');
    } else if (c == 'C') {
        P('G');
    } else {
        P('C');
    }
}