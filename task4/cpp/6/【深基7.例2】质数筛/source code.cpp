#include <iostream>
#include <vector>
using namespace std;

int jud_zs(int num) {
    int jud = 1;
    if (num == 0 || num == 1) {
        jud = 0;
    }
    else {
        for (int i = 2; i < num; i ++) {
            if (num % i == 0) {
                jud = 0;
                break;
            }
        }
    }

    return jud;
}

int main() {
    int n;
    cin >> n;
    vector<int> zs;
    for (int i = 0; i < n; i ++) {
        int num;
        cin >> num;
        if (jud_zs(num)) {
            zs.push_back(num);
        }
    }

    for (int i = 0; i < zs.size(); i ++) {
        cout << zs[i];
        if (i < zs.size()) {
            cout << " ";
        }
        else {
            cout << endl;
        }
    }

    return 0;
}
