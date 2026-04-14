#include<iostream>
using namespace std;

int main(){
    int aee[5]={10,19,18,17,16};
    int maxIndex=0,minIndex=0;
    for (int i=0;i<5;i++){
        if(aee[i]>aee[maxIndex]){
        maxIndex= i;
        }
        if(aee[i]<aee[minIndex]){
            minIndex =i;
        }
    }
    int temp=aee[maxIndex];
    aee[maxIndex]=aee[minIndex];
    aee[minIndex]=temp;
    cout<<"ARRAT ATEG YJR SWAP"<<endl;
    for(int i=0;i<5;i++){
        cout<<aee[i]<<endl;
    }
    return 0;
    }