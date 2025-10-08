#include <iostream>
using namespace std;

int main() {
    const double Pi = 3.14;
    const int V = 20;
    int h,r;
    cin >> h >> r;
    double fn = V * 1000 / (Pi * h * r * r);

    int n = (int) fn;
    if (fn > n) {
        n ++;
    }
    cout << n;

    return 0;
}
