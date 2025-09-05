#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    while (n >= 10) {   // keep dividing until one digit left
        n = n / 10;
    }

    cout << n;
    return 0;
}