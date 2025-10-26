#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        int num = 0;
        for (int j = 0; j < i; j ++) {
            if (a[j] < a[i]) {
                num ++;
            }
        }

        cout << num;
        if (i < n - 1) {
            cout << " ";
        }
        else {
            cout << endl;
        }
    }

    return 0;
}
