#include <iostream>
using namespace std;

int main() {
    int s,v;
    cin >> s >> v;
    int t;
    if (s % v == 0) {
        t = s /v;
    }
    else {
        t = s / v + 1;
    }
    t += 10;
    int h = 8;
    int m = 0;
    for (int i = 0; i < t; i ++) {
        if (m == 0) {
            if (h == 0) {
                h = 23;
            }
            else {
                h --;
            }
            m = 59;
        }
        else {
            m --;
        }
    }
    if (h / 10 == 0) {
        cout << "0" << h;
    }
    else {
        cout << h;
    }
    cout << ":";
    if (m / 10 == 0) {
        cout << "0" << m << endl;
    }
    else {
        cout << m << endl;
    }

    return 0;
}
