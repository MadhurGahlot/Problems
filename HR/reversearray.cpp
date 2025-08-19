#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseArray(vector<int> a) {
vector<int> temp;
 for(int i=a.size()-1;i>=0;i--){
    temp.push_back(a[i]);
 }
 return temp;
}

int main(){
vector<int> arr = {1, 2, 3, 4, 5};

cout<<"The elemnt are: ";
cout<<"This is your arr: ";
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
vector<int> rev = reverseArray(arr);
cout<<"After reverse array: ";
cout<<"This is your arr: ";
for(int i=0;i<rev.size();i++){
    cout<<rev[i]<<" ";
}

    return 0;
}