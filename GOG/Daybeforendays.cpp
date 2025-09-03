/*Given two integers d and n. Where d is the day, out of 7 days of the week, d varies from 0 to 6 as shown below.
0 - Sunday
1 - Monday
2 - Tuesday
3 - Wednesday
4 - Thursday
5 - Friday
6 - Saturday

You have to return the index for the day which is n days before the given day d*/
#include<iostream>
using namespace std;

int daysbeforen(int d ,int n){
    int diff;
    diff=(d-n)%7;
    if(diff <0){
        diff = diff +7;
    }
    return diff;

}

int main(){
    int d,n;
    cout<<"Enter the value of d: ";
    cin>>d;
    cout<<"Enter the value of n: ";
    cin>>n;
    string week[7]={"Sunday","Monday","Tuesday",
        "Wednsday","Thursday","Friday","Saturday"};
    int result;
    result=daysbeforen(d,n);

    cout<<"The "<< n <<" days before "<< d << " day is " << week[result] <<"...";

    return 0;
}
