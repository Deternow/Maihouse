#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double zb[3][2];
    for (int i = 0; i < 3; i ++) {
        cin >> zb[i][0] >> zb[i][1];
    }
    double c = 0;
    for (int i = 0; i < 3; i ++) {
        for (int j = i + 1; j < 3; j ++) {
            c += sqrt(pow(zb[i][0] - zb[j][0],2) + pow(zb[i][1] - zb[j][1],2));
        }
    }
    printf("%.2f",c);

    return 0;
}
