#include <iostream>
using namespace std;

int main() {
    int a;
    int cnt = 1;
    cin >> a;
    while (a != 1) {
        a /= 2;
        cnt ++;
    }
    cout << cnt;

    return 0;
}
