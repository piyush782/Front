#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    // int mx=n1>n2?n1:n2;
    // int mn=n1<n2?n1:n2;
    int k=n1;
    while(1){
        if(mx%n1==0 && mx%n2==0){
            cout<<"LCM = "<<mx<<endl;
            break;
        }
        mx++;
    }

    while(1){
        if(n1%mn==0 && n2%mn==0){
            cout<<"HCF = " <<mn<<endl;
            break;
        }
       mn--;
    }
    int count=0;
    while(n1>0){
        if(k%n1==0){
            cout<<n1<<endl;
            count++;
        }

        n1--;

    }
    cout<<count<<endl;
    
}