/*
In this challenge, you need to calculate and print the sum of elements in an array, 
considering that some integers may be very large.*/
#include<iostream>
using namespace std;
int main(){
int n;
 
 cout<<"Enter the no of element: ";
 cin>>n;
 long*arr = new long[n];
  for(int i=0;i<n;i++){
    cout<<"Enter the "<< i <<" element: ";
    cin>>arr[i];
  }
  cout<<"The elements in array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  long sum=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
  }
cout<<"\n"<<"The sum is: "<< sum << " ";
delete[] arr;
    return 0;
}