#include<iostream>
#include<vector>
using namespace std;

    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans ^=val;
        }
        return ans;
        
    }
int main(){
    vector<int> nums={2,2,1};
    int result=singleNumber(nums);
    cout<<"single number is"<< result<<endl;
}