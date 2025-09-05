#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    cin.ignore();
    
    if(n % 3 == 0 && n % 5 == 0){
        cout<<"FizzBuzz"<<"\n";
    }
    else if(n % 3 == 0){
        cout<<"Fizz"<<"\n";
    }
    else if(n % 5 == 0){
        cout<<"Buzz"<<"\n";
    }

    return 0;
}