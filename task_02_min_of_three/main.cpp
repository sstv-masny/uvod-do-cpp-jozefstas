
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "in: " << a << b << c << endl;
    if (a > b && a > c) {
        cout << "out: " << a << endl;
    }

    else if (b > a && b > c) {
        cout << "out: " << b << endl;
    }

    else if (c > a && c > b) {
        cout << "out: " << c << endl;
    }
    // TODO: print the minimum of a, b, c
    return 0;
}
