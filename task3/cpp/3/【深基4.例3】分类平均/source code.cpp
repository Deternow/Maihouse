#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int sumA = 0, sumB = 0;
    int numA = 0, numB = 0;
    for (int i = 1; i <= n; i ++) {
        if (i % k == 0) {
            sumA += i;
            numA ++;
        }
        else {
            sumB += i;
            numB ++;
        }
    }
    double averA = 1.0 * sumA / numA;
    double averB = 1.0 * sumB / numB;
    printf("%.1f %.1f",averA, averB);

    return 0;
}
