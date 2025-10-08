#include <iostream>
using namespace std;

int main() {
    double num;
    cin >> num;
    int n = num * 10;
    cout << n % 10 << "." << n % 100 / 10 << n % 1000 / 100 << n / 1000;
    return 0;
}
