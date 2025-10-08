#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int Lo = n * 5;
    int Lu = n * 3 + 11;
    if (Lo > Lu) {
        cout << "Luogu" << endl;
    }
    else {
        cout << "Local" << endl;
    }

    return 0;
}
