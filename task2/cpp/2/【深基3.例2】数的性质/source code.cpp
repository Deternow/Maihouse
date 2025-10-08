#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int jud1, jud2;
    if (x % 2 == 0) {
        jud1 = 1;
    }
    else {
        jud1 = 0;
    }
    if (x > 4 && x <= 12) {
        jud2 = 1;
    }
    else {
        jud2 = 0;
    }
    int judA = 0, judU = 0, judB = 0, judM = 0;
    if (jud1 && jud2) {
        judA = 1;
    }
    if (jud1 || jud2) {
        judU = 1;
    }
    if ((jud1 && !jud2) || (!jud1 && jud2)) {
        judB = 1;
    }
    if (!jud1 && !jud2) {
        judM = 1;
    }
    cout << judA << " " << judU << " " << judB << " " << judM << endl;
}
