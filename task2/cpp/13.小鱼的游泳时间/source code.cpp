#include <iostream>
using namespace std;

void add_m(int* h, int* m) {
    *m = *m + 1;
    if (*m == 60) {
        *h = *h + 1;
        *m = 0;
    }
}

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int e = 0;
    int f = 0;
    while (a != c || b != d) {
        add_m(&a, &b);
        add_m(&e, &f);
    }
    cout << e << " " << f;

    return 0;
}
