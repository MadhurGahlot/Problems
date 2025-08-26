/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = 1+5+9=15.
The right-to-left diagonal = 3+5+9=17).
Their absolute difference is |17-15| =2; .*/
#include<iostream>
#include<vector>
using namespace std;
void diagonalsum(vector<vector<int>> arr,int row,int col){
    int lefttoright=0;

    for (int i = 0; i < row; i++) {
        lefttoright += arr[i][i];  // only diagonal elements
    }
    cout << "Sum of left-to-right diagonal = " << lefttoright << endl;
    int righttoleft = 0;
for (int i = 0; i < row; i++) {
    righttoleft += arr[i][col - 1 - i];  // (0,col-1), (1,col-2), ...
}
int ads;
ads=lefttoright-righttoleft;
if(ads<0){
    ads=-ads;
}
cout<<"The ads is "<< ads <<".";
}
int main(){
int row;
cout<<"Enter the no of rows: ";
cin>>row;
int col;
cout<<"Enter the no of column: ";
cin>>col;
vector<vector <int>> arr( row , vector<int>(col));
   for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
           cout<<"Enter th element "<<"row = "<<i<< " column= "<< j <<": ";
           cin>> arr[i][j];
        
        }
    }
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout<< arr[i][j]<<" ";
            }
        cout<<"\n";
    }
int abs;
diagonalsum( arr,row,col);

    return 0;
}