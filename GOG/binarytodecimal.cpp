#include<iostream>
using namespace std;
int main(){
string binary;
cout<<"Enter your binary: ";
cin>>binary;
int n;
cout<<"size: "<< (n=binary.size())<<"\n";
int decimal;
decimal=0;
for(int i=0;i<n;i++){
    decimal=decimal*2 + (binary[i]-'0');
}   
cout<<"Sum: "<< decimal << "\n"; 
return 0;
}