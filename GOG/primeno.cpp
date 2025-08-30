#include<iostream>
using namespace std;
bool checkprime(int number){
    //int n;
       if (number <= 1) return false;   // 0, 1, and negatives are not prime
        if (number == 2) return true;  // 2 is prime
        
        for (int i = 2; i*i <= number; i++) {
            if (number % i == 0) {
                return false;   // Divisor found → not prime
            }
        }
        return true;   // No divisors found → prime
    }


int main(){
int number;
cout<<"Enter the no: ";
cin>>number;
cout<<checkprime(number);


    return 0;
}