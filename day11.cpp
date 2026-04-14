#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums,int target, int n){
    vector<int>ans;
    n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }

    }
    return ans
}


int main(){
    vector<int>nums={1,2,3,4,5};
    int target=9;
    vector<int>ans=pairsum(nums,target);
    cout<<ans[0]" ,"<<ans[1]<<endl;
    return 0;
}