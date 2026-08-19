//Write a C++ program that takes three sides of a triangle as input and checks whether they can form a valid triangle.
//must use &&;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a + b > c && a + c > b && b + c > a){
        cout<<"Valid Triangle";
    } else{
        cout<<"Invalid Triangle";
    }

    return 0;
}