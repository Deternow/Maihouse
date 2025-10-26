#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num;
    num.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            num.push_back(n);
        }
        else {
            n = n * 3 + 1;
            num.push_back(n);
        }
    }
    for (int i = num.size() - 1; i >= 0; i --) {
        cout << num[i];
        if (i > 0) {
            cout << " ";
        }
        else {
            cout << endl;
        }
    }
}
