#include <iostream>
using namespace std;

void sub_m(int *y, int *j) {
    for (int i = 0; i < 19; i ++) {
        *j = *j - 1;
        if (*j < 0) {
            *y = *y - 1;
            *j = 9;
        }
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    int n = 0;
    while (a > 1) {
        sub_m(&a, &b);
        n ++;
    }
    if (a == 1 && b == 9) {
        n ++;
    }
    cout << n;

    return 0;
}
