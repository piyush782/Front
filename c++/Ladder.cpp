#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st number: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number: ";
    cin>>b;
    int c;
    cout<<"Enter 3rd number: ";
    cin>>c;

     if( b!=c && a>b && a>c){
        cout<<a<<"  is largest"<<endl;
 }
      else if( c!=a && b>a && b>c){
        cout<<b<<"  is largest"<<endl;
     }

     else if( b!=a && c>a &&  c>b){
        cout<<c<<"  is largest"<<endl;
     }



     
      if(a==b ){
        if(b>c){
            
            cout<<b<<" and "<<c<<" so,both a or b are equal and also both are largest ";
        }
        else if(c>b){
            cout<<c<<" is largest"<<endl;

        }
        else{
           cout<<"equal numbers"<<endl ;
        }
     }




        else if(a==c){
        if(a>b){
            cout<<a<<" and "<<c<<" so,both a or c are equal and also both are largest ";
           
        }
        else if(b>a){
            cout<<b<<" is largest"<<endl;
        }
     }



     else if(b==c){
        if(b>a){
            cout<<b<<" and "<<c<<" so,both b or c are equal and also both are largest ";
        }
        else if(a>b){
            cout<<a<<" is largest"<<endl;
        }
     }

  }