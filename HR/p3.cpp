#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    double price = 123.456789123;

    cout << fixed << setprecision(6) << price << endl;

    return 0;
}