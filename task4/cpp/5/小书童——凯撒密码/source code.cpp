#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i ++) {
        int n1 = (int)s[i] + n;
        n1 = (n1 - 'a') % ('z' - 'a' + 1);
        s[i] = (char) ('a' + n1);
    }

    cout << s << endl;

    return 0;
}
