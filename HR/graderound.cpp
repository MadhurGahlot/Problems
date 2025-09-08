/*
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than 
3, round  up to the next multiple of 5.
If the value of  is less than , no rounding occurs as the result will still be a failing grade.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size of vector:  ";
cin>>n;
vector <int> marks;
for(int i =0;i<n;i++){
    cout<<"Entre the marks of sub "<< i <<": ";
    int ele;
    cin>>ele;
    marks.push_back(ele);
}
cout<<"Elements in vector: ";
for(int i=0;i<marks.size();i++){
    cout<< marks[i] <<" ";
}
cout<<"\n";
int no;
vector <int> result;
for(int grade : marks){
    if(grade < 38){
        result.push_back(grade);
    }
    else{
        int nextmultiple = (((grade /5) +1)* 5);
        if(nextmultiple - grade <3){
            result.push_back(nextmultiple);
        }
        else{
            result.push_back(grade);
        }
    }
}
cout<<"THE result of vector is : ";
for(int i=0;i<result.size();i++){
    cout<< result[i] <<"  ";
}




    return 0;
}