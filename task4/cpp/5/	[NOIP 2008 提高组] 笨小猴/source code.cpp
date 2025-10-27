#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cs[26] = {0};
    for (int i = 0; i < (int)s.length(); i ++) {
        cs[int(s[i] - 'a')] += 1;
    }
    int max = 0, min = 0;
    for (int i = 0; i < 26; i ++) {
        if (cs[i] > max) {
            max = cs[i];
        }
        if (cs[i] > 0 && (cs[i] < min || min == 0)) {
            min = cs[i];
        }
    }

    int num = max - min;

    int jud = 1;
    if (num == 0 || num == 1) {
        jud = 0;
    }
    for (int i = 2; i < num; i ++) {
        if (num % i == 0) {
            jud = 0;
        }
    }

    if (jud) {
        cout << "Lucky Word" << endl << num << endl;
    }
    else {
        cout << "No Answer" << endl << 0 << endl;
    }

    return 0;
}
