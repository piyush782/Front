#include<iostream>
using namespace std;
int a=900;
int main(){
    {
    //Topic 1:Scope Resolution Oprator :- it is used to access  value of global variable

    int a=100;
    cout<<::a<<endl; //Scope resolution operator
    cout<<a<<endl;;
    }

    //Topic 2:Referencce variable :- it is used to copy the adress or value of noraml variable

    int b=30;   //Normal Variable
    int &c=b;   //Refrence variable
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
     
    cout<<"adress of c  "<<&c<<endl;
    cout<<"adress of b  "<<&b<<endl;


    c=40;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    
    //Topic 3:Pointer :-it is used to store adress of varible 

    int *p=&a;   //Refrence
    cout<<"adress of a="<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; //Derefrence 
  
    //Topic 4:Const variable :-using const keyword we can create value of variable constant 
    // means we do not reinitialise or redeclare the  variable 

    const int d=6;        
    cout<<"d="<<d<<endl;
    
    // d=9; //means we do not reinatialise the value of const variable




    //  Question 1:Write a program to find area of Rectangle
    int r=5;
    float area=2*(3.14)*r;
    cout<<area<<endl;

    // Question 2:Write a program to convert celcius into ferenite
    int TempC;
    cout<<"Enter Tempreture in celcius : ";
    cin>>TempC;
    int TempF=(TempC*1.8)+32;
    cout<<"Tempreature in Ferenite :" <<TempF<<endl;

    //Question 3:write a program to find simple interest
    int P;
    cout<<"Principal amount: "<<endl;
    cin>>P;

    int T;
    cout<<"Time : "<<endl;
    cin>>T;

    int R;
    cout<<"enter Rate: "<<endl;
    cin>>R;

    int SI=(P*T*R)/100;
    cout<<"Simple Interest :"<<SI<<endl;



    //Question 4:Find the cube of number
    int num;

    cout<<"Enter a number: ";
    cin>>num;
    cout<<"cube: "<<num*num*num<<endl;

    //Question 5:Find the square of a number
    int num2;
    cout<<"Enter a number : ";
    cin>>num2;
    cout<<"Square: "<<num2*num2<<endl;



}
