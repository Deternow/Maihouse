#include <iostream>
using namespace std;

int main() {
    char c;
    int n = 0;
    c = getchar();
    while (c != '\n' && c != EOF) {
        if (c != ' ') {
            n ++;
        } 
        c = getchar();
    }
    cout << n << endl;

    return 0;
}
