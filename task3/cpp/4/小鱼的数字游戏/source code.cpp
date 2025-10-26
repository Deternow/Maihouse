#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int num;
    cin >> num;
    while (num != 0){
        a.push_back(num);
        cin >> num;
    }
    for (int i = a.size() - 1; i >= 0; i --) {
        cout << a[i];
        if (i > 0) {
            cout << " ";
        }
        else {
            cout << endl;
        }
    }

    return 0;
}
