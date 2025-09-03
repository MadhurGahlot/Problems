/*Given an input num as a string. You need to typecast into an integer and double it.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    cout<<"Enter a no: ";
    getline(cin,num);
    int c;
    c=stoi(num);
    cout<<"The double "<< c*2 <<"\n";
    return 0;
}