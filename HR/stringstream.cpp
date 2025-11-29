#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> result;
    int num;
    char ch;

    while (ss >> num) {
        result.push_back(num);
        ss >> ch;   // read comma
    }
    return result;
}

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }

    return 0;
}