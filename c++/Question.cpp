#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0,a=0,dup;
    dup=num;
    if(num>=99 && num<=999)
{
    while(num>0){
        a=num%10;
        sum=sum+(a*a*a);
        num=num/10;
    }
    if(sum==dup){
        cout<<" armstrome ";
    }
    else{
        cout<<" not a armstrome ";
    }


}
else{
    cout<<"not valid number";
}
}