#include<iostream>
using namespace std;
int main(){
    int a;
    // goto:-is used as a ignoring of code
    // goto uncle;
    // cout<<"hello guys";
    // uncle:
    cout<<"this is our life "<<endl;
    a=10;
    // cystrom:
    // if(a>0){
    //     cout<<a<<endl;
    //     a--;
    // }
    // goto cystrom;

    int b;
    cin>>b;
    int c=1;
    dekst:
     if(c<=10){
        cout<<c*b<<endl;
        c++;
 }
    goto dekst;
}