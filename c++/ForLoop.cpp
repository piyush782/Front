#include<iostream>
using namespace std;
int main(){
    int num=3;
    int limit;
    cin>>limit;
    int k=0,flag=0;
    while(num<=limit){
      k=num-1;
     while(k>1) {
          if(num%k==0){
            flag=1;
            break;
          }
          k--;
        }
       if(flag==0){
        cout<<num<<endl;
       }
       flag=0;
       num++;
      }


}