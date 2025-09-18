#include<iostream>
#include<vector>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int max_sum = INT_MIN;  // initialize to the smallest integer

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int top = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            int middle = arr[i+1][j+1];
            int bottom = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            int sum = top + middle + bottom;
            max_sum = max(max_sum, sum);
        }
    }

    return max_sum;
}

int main() {
    vector<vector<int>> arr(6, vector<int>(6));
    
    // Input 6x6 matrix
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    cout << hourglassSum(arr) << endl;

    return 0;
}
