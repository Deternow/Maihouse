#include <iostream>
using namespace std;

int main() {
    int x;
    int n;
    cin >> n;
    cin >> x;
    int num = 0;
    for (int i = 1; i <= n; i ++) {
        int i_ = i;
        while (i_ > 9) {
            if (i_ % 10 == x) {
                num ++;
            }
            i_ /= 10;
        }
        if (i_ % 10 == x) {
            num ++;
        }
    }
    cout << num;
    return 0;
}
