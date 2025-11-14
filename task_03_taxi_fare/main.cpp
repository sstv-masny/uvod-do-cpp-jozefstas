
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int k, cena = 4;
    cout << "kolko kilometrov to bude?: " << endl;
    cin >> k;
    if (k <= 2) {
        cout << "bude to 4€" << endl;
    } else
        cout << "bude to: " << 4.00 + 1.50 * ceil(k - 2) << endl;
    // TODO: compute the fare as specified and print with two decimals
    return 0;
}
