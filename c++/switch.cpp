#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    char c;
    cout<<" A is for area of circle"<<endl;
    cout<<" C is for circumference of circle"<<endl;
    cout<<" S is for square of circle"<<endl;
    cin>>c;
    switch (c){
        case 'A':{
            cout<<n*n*(3.14);
            break;
        }

        case 'B':{
            cout<<2*n*(3.14);
            break;
        }

        case 'S':{
            cout<<n*n;
            break;
        }
    }
}