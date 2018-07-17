#include <iostream>
using namespace std;

int main() {
    string s;
    int count;

    cin >> s;

    for (int i = 0; i <= 3; i++) {
        if (s[i] == '+') {
            count++;
        } else if (s[i] == '-') {
            count--;
        }

    }

    cout << count;
}