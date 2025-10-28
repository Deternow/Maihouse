#include <iostream>
#include <vector>
using namespace std;

int jud_rn(int yue) {
    if (yue % 4 == 0 && (yue % 400 == 0 || yue % 100 != 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int x,y;
    cin >> x >> y;
    vector<int> rn;
    for (int i = x; i <= y; i ++) {
        if (jud_rn(i)) {
            rn.push_back(i);
        }
    }
    cout << rn.size() << endl;

    for (int i = 0; i < rn.size(); i ++) {
        cout << rn[i];
        if (i < rn.size() - 1) {
            cout << " ";
        }
        else {
            cout << endl;
        }
    }
    return 0;
}
