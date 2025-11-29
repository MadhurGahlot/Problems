#include<iostream>
using namespace std;

class Person {
private:
    string first_name_;
    string last_name_;

public:
    Person(string first_name, string last_name) {
        first_name_ = first_name;
        last_name_ = last_name;
    }

    string get_first_name() const {
        return first_name_;
    }

    string get_last_name() const {
        return last_name_;
    }

    // Overload << operator
    friend ostream& operator<<(ostream& out, const Person& p) {
        out << "first_name=" << p.first_name_
            << ",last_name=" << p.last_name_;
        return out;
    }
};

int main() {
    string first, last, event;
    cin >> first >> last >> event;

    Person p(first, last);

    cout << p << " " << event << endl;

    return 0;
}
