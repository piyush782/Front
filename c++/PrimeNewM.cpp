#include<iostream>
using namespace std;
int main(){

    // Q.1: W.A.P to check a number is prime or not?
    int num;
    cin>>num;
    int b=num-1,flag=0;
    while(b>1){
        if(num%b==0){
            flag=1;
            break;
        }
        b--;
    }
    if(flag==1){
        cout<<"it is not prime";
    }
    else{
        cout<<"it is prime";
    }



 // //Q.2 :w.a.p to find out given number is perfect or not?

    // int n;
    // cin>>n;
    // int k=n;
    // int sum=0;
    // int b=n-1;
    // int dot;
    // while(b>0){
    //     if(n%b==0){
    //         cout<<"factor = "<<b<<endl;
    //           dot=b;
    //           sum=sum+dot;
    //           dot=dot/10;
    //     }
       
    //     b--;

    // }
    // cout<<"sum = "<<sum<<endl;
    // if(sum==k){
    //     cout<<"it is a perfect number";
    // }
    // else{
    //     cout<<"not a perfect number";
    // }

  //Q.3: W.A.P to find reverse of a number ?
    
    // int n,rev=0,b;
    // cin>>n;
    // while(n>0){
    //     b=n%10;
    //     rev=(rev*10)+b;
    //     n=n/10;
    // }
    // cout<<"reverse number = "<<rev;

 //Q.4: W.A.P to find the sum of digits in a number ?
   
//    int n;
//    cin>>n;
//    int sum=0,b;
//    while(n>0){
//       b=n%10;
//       sum=sum+b;
//       n=n/10;
//    }
//   cout<<"Sum = "<<sum;


}