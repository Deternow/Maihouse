#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;
    for (int i = n; i > 0; i --) {
        for (int j = i; j > 0; j --) {
            if (cnt < 10) {
                cout << 0 << cnt;
            }
            else {
                cout << cnt;
            }
            cnt ++;
        }
        cout << endl;
    }

    return 0;
}
