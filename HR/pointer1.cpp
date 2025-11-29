#include <iostream>
#include <cmath>
using namespace std;

void update(int &pa, int &pb) {
    int sum = pa + pb;
    int diff = abs(pa - pb);

    pa = sum;
    pb = diff;
}

int main() {
    int a, b;
    cin >> a >> b;

    update(a, b);

    cout << a << "\n" << b;
    return 0;
}