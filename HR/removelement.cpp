#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; // index for new array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // overwrite unwanted elements
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int ele;
        cout << "Enter element " << i << ": ";
        cin >> ele;
        arr.push_back(ele);
    }

    int value;
    cout << "Enter the value to remove: ";
    cin >> value;

    int k = removeElement(arr, value);

    cout << "New length: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
