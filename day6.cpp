#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vect={1,2,4};
    cout<<vect[0];
    vect.push_back(8);
    vect.pop_back();
    cout<<vect.size()<<endl;
    for(int val:vect){
        cout<<val<<endl;
    }
    return 0;

}
