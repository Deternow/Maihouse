#include <iostream>
#include <cstdlib>
using namespace std;

int ws(int num) {
    int n = 0;
    if (num == 0) {
        return 1;
    }
    if (num > 0) {
        while (num > 9) {
            num /= 10;
            n ++;
        }
        return n + 1;
    }
    else {
        while (num < -9) {
            num /= 10;
            n ++;
        }
        return n + 2;
    }
}

int main() {
    int i;
    cin >> i;
    char s;

    for (int j = 0; j < i; j ++) {
        int sum;
        string s1;
        cin >> s1;
        int n1, n2;
        if (s1 == "a") {
            s = 'a';
            cin >> n1 >> n2;
            sum = n1 + n2;
            cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
        }
        else if (s1 == "b") {
            s = 'b';
            cin >> n1 >> n2;
            sum = n1 - n2;
            cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
        }
        else if (s1 == "c") {
            s = 'c';
            cin >> n1 >> n2;
            sum = n1 * n2;
            cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
        }
        else {
            n1 = std::atoi(s1.c_str());
            cin >> n2;
            if (s == 'a') {
                sum = n1 + n2;
                cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
            }
            else if (s == 'b') {
                sum = n1 - n2;
                cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
            }
            else if (s == 'c') {
                sum = n1 * n2;
                cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
            }
        }
        cout << 2 + ws(n1) + ws(n2) + ws(sum) << endl;
    }

    return 0;
}
