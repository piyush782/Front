#include<iostream>
using namespace std;
int main(){
    float phy;
    cout<<"enter your physics marks "<<endl;
    cin>>phy;
    float chem;
    cout<<"enter your Chemistry marks "<<endl;
    cin>>chem;
    float maths;
    cout<<"enter your maths marks "<<endl;
    cin>>maths;
    float per=(phy+chem+maths)/3;
     if(phy<0 || phy>100 || chem<0 || chem>100 ||maths<0 || maths>100){
        cout<<"invalid mark";
       
    }
       else if(chem>=35 && maths>=35 && phy<35 ){
            cout<<"you have suplementry in physics"<<endl;
          }
       else if(phy>=35 && maths>=35 && chem<35 ){
            cout<<"you have suplementry in chemistry"<<endl;
        }
         else if(phy>=35 && chem>=35 && maths<35 ){
            cout<<"you have suplementry in maths"<<endl;
        }
      
        else if((phy<35 && chem<35 && maths>=35) || (maths<35 && chem<35 && phy>=35) || (maths<35 && phy<35 && chem>=35)){
            cout<<"you are completely fail";
        }
        else if(phy<35 && chem<35 && maths<35){
            cout<<"you are completely fail";
        }
       
        else if(per>=60 ){ 
            cout<<"congratulation you get 1st Division"<<endl;
        }
        else if(per>=50 && per<60 ){ 
            cout<<"congratulation you get 2nd Division"<<endl;
        }
        
        else {
            cout<<"3rd Division";
        }
    }
   


   