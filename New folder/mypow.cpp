#include<iostream>
using namespace std;

int mypow(double x,int n){
     long binform=n;
     if(binform<0){
        x=1/x;
        binform=-binform;
     }
     double ans =1;
     while(binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
     }
     return ans;
}
int  main(){
    double x;
    int n;
    cout<<"enter the x :";
    cin>>x;
    cout<<"enter the n :";
    cin>>n;
    double result=mypow(x,n);
    cout<<"result is ="<<result<<endl;
    return 0;

    
}