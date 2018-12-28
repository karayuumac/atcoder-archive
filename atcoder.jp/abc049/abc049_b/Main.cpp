#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//
// Created by karayuu on 2018-12-28.
//

int main () {
    int h, w;
    cin >> h >> w;

    while (true) {
        string s;
        cin >> s;

        if (s.empty()) {
            break;
        }

        for (int i = 0; i < 2; i++) {
            cout << s << endl;
        }
    }
    cout << endl;
}