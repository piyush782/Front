#include<iostream>
using namespace std;
int main(){
//     int num;
//     cin>>num;
//     int b=0;
//     int c=10;
// //    do{
//       cout<<b*num<<endl;
//       b++;
//    }
//    while(b<=10);
    //  int a=1;
    //  int mul=1;
    //  do{
    //      mul=mul*a;
    //      a++;
    //  }
    //  while(a<10);
    //  cout<<mul;

// While loop:   otherwise it will terminate  the loop and it is alsdo called entry loop
   
// int i=10;
// while(i>0){
//     cout<<i<<endl;
//     i--;
// }
// int num;
// cin>>num;
// int count=0;
// int a;
// while(num>0){
//     // a=num%10;
//     num=num/10;
//     count++;
// }
// cout<<count;
  
int num;
cin>>num;
int num2;
cin>>num2;
for(int i=2;num<=50;num++){
   if(num%i==0 && num2%i==0){
    cout<<i<<endl;
   }

}


}