//Write a C++ program that takes two integers as input and determines whether the first number is greater than, less than, or equal to the second number.
//must use >, <, == , also must use if else

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    if(x > y){
        cout<<"First number is greater";
    } else if(x < y){
        cout<<"Second number is greater";
    } else if(x == y){
        cout<<"Both numbers are equal";
    }
    return 0;
}