/*
There are  elements: two positive, two negative and one zero
. Their ratios are ,  and . Results are printed as:*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of element enter in array: ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<< i <<" : ";
        cin>>arr[i];
    }
    cout<<"Element in array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    double positive,negative,zero;
    positive=0;
    negative=0;
    zero=0;
    for(int idx=0;idx<n;idx++){
        if(arr[idx]>0){
            positive++;
        }
        else if(arr[idx]<0){
            negative++;
        }
        else if(arr[idx]==0){
            zero++;
        }
    }
    cout<<"The ratio of positive no is: "<< fixed << setprecision(6)<<positive/n<<"\n";
    cout<<"The ratio of negative no is: "<< fixed << setprecision(6)<<negative/n<<"\n";
    cout<<"The ratio of zero no is: "<< fixed << setprecision(6)<<zero/n<<"\n";
    cout<<"true";
    delete[] arr;
    return 0;
}
