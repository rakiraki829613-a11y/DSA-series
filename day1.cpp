#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityelements(vector<int>& nums){
    int n=nums.size();
    for(int val:nums){
       int freq=0;
       for(int ele:nums){
        if(val==ele){
            freq++;
        }
       }
       if(freq>n/2){
        return val;
       }    
    }
    return -1;
}
int main(){
    int nums[5]={1,1,2,2,1};
    int ans=majorityelements(nums);
    cout<<"madfghjkl"<<ans<<endl;
    return 0;
}