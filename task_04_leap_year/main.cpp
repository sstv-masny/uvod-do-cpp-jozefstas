
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "in: " << endl;
    cin >> year;
    if (((year % 400 == 0) || (year % 100 != 0) || (year % 4 == 0))) {
        cout << "out: YES" << endl;
    }

    else
        cout << "out: NO" << endl;

    // TODO: implement leap rule and print YES/NO
    return 0;
}
