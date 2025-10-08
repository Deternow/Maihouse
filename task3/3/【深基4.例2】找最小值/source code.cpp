#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int min;
    cin >> min;
    for (int i = 0; i < n - 1; i ++) {
        int num;
        cin >> num;
        if (num < min) {
            min = num;
        }
    }
    cout << min;

    return 0;
}
