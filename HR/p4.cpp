/*
The tallest candles are 4 units high.
 There are 2 candles with this height, so the function should return 2.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of element in arr: ";
    cin>>n;
    int *arr = new  int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<< i <<": ";
        cin>>arr[i];
    }
    cout<<"The element in arr is: ";
    for(int i=0;i<n;i++){
        cout<<"[ "<< arr[i] << " ] ";
    }
    int count=0;
    int tallest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>tallest){
            tallest=arr[i];
        }
    }
    cout<<"\n"<<"The max no in arr is: "<<tallest<<"\n";
    for(int i=0;i<n;i++){
        if(arr[i]==tallest){
            count++;
        }
    }
    cout<<"The count of talleast no is: "<< count <<"\n";
    delete[] arr;
    return 0 ;
}