#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bc = pow(2, n);
    bool zbz[bc][bc];
    for (int i = 0; i < bc; i ++) {
        for (int j = 0; j < bc; j ++) {
            zbz[i][j] = 1;
        }
    }
    int bc1 = bc;
    for (int i = 0; i < n; i ++) {
        bc1 /= 2;
        for (int j = 0; j < pow(2, i); j ++) {
            for (int k = 0; k < pow(2, i); k ++) {
                for (int l = 0; l < bc1; l ++) {
                    for (int m = 0; m < bc1; m ++) {
                        zbz[l + bc1 * 2 * j][m + bc1 * 2 * k] = 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < bc; i ++) {
        for (int j = 0; j < bc; j ++) {
            cout << zbz[i][j];
            if (j < bc - 1) {
                cout << " ";
            }
            else {
                cout << endl;
            }
        }
    }

    return 0;
}
