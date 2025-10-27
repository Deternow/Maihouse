#include <iostream>
using namespace std;

int main() {
    int l,m;
    cin >> l >> m;
    bool shu[l + 1] = {0};
    for (int i = 0; i < m; i ++) {
        int u,v;
        cin >> u >> v;
        for (int j = u; j <= v; j ++) {
            shu[j] = 1;
        }
    }

    int num = 0;
    for (int i = 0; i < l + 1; i ++) {
        if (shu[i] == 0) {
            num ++;
        }
    }

    cout << num;

    return 0;
}
