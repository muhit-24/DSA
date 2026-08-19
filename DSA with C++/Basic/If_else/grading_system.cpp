//Write a C++ program that takes a student's marks as input and prints the corresponding grade.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter your Resut: ";
    cin>>n;

    if(n>79 && n<=100){
        cout<<"Your Grade is: A+";
    } else if(n>69 && n<80){
        cout<<"Your Grade is: A";
    } else if(n>59 && n<70){
        cout<<"Your Grade is: B";
    } else if(n>49 && n<60){
        cout<<"Your Grade is: C";
    } else if(n>39 && n<50){
        cout<<"Your Grade is: D";
    } else if(n<40 && n>=0){
        cout<<"Your Grade is: F";
    } else{
        cout<<"!! enter valid number !!";
    }
    return 0;
}