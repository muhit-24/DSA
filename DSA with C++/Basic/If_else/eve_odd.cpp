//Write a C++ program that takes an integer as input and determines whether the number is even or odd.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2 == 0){
        cout<<"even";
    } else{
        cout<<"odd";
    }
    
    return 0;
}