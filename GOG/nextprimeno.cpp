#include<iostream>
using namespace std;
void nextprimeno(int num){

    int candidate = num + 1; // start checking from next number
    while (true) {
        bool prime = true;
        if (candidate <= 1) {
            prime = false; // 0 and 1 are not prime
        } else {
            for (int i = 2; i*i <= (candidate); i++) {
                if (candidate % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime) {
            cout << "Next prime after " << num << " is " << candidate << endl;
            break; // stop once we find the first prime
        }

        candidate++; // check the next number
    }

    
}


int main(){
int number;
cout<<"Enter the no: ";
cin>>number;

nextprimeno(number);


    return 0;
}