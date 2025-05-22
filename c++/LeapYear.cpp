#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;

    if(year%4==0){
        cout<<"it is leap year";
    }
    else if(year%100==0){
        cout<<"it is not a leap year";
    }
    else if(year%400==0){
        cout<<"it is a  leap year";
    }
    else{
        cout<<"not a leap year";
    }
   
    
}