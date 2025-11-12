
#include <iostream>
int main() {
    long long n;
    cout << "cislo";
    cin >> n;

    do{
        cout << n % 10;
        do 
            n/=10;
        while (n%10 == 0&&n)
    } 
    while (n>0);

    return 0;
}
