/*
       1
     2 3
   4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;

int main(){
int row,column;
int num=1;
row=4;
column=4;

for (int i = 1; i <= row; i++) {
       
        for (int space = 1; space <= row - i; space++) {
            cout << "  "; 
        }
        
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << "\n";
    }

    return 0;
}