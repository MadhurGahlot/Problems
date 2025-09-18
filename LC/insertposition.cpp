#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= target) {
            return i;  // insert before the first bigger or equal element
        }
    }
    return nums.size();
}

int main(){
    vector<int> arr;
    int n;
    cout << "Enter value of n: ";
    cin >> n;
int value;

    for (int i = 0; i < n; i++) {
        int ele;
        cout << "Enter element " << i << ": ";
        cin >> ele;
        arr.push_back(ele);
    }
cout<<"Enter value: ";
cin>>value;
int nm;
nm=searchInsert(arr,value);
cout<< nm;

    return 0;
}