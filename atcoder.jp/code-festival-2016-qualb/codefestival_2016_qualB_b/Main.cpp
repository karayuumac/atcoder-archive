#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//
// Created by karayuu on 2018-12-28.
//

int main() {
    int n, a, b;
    string s;

    cin >> n >> a >> b;
    cin >> s;

    int count = 0;
    int a_count = 0;
    for (int i = 1; i <= n; i++) {
        switch (s[i - 1]) {
            case 'a':
                if (count < a + b) {
                    count++;
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
                continue;

            case 'b':
                if (count < a + b && a_count < b) {
                    count++;

                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
                a_count++;
                continue;

            default:
                cout << "No" << endl;
                continue;
        }
    }
    cout << endl;
}