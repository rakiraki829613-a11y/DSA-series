#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int subarraysum(vector<int>& nums){
    int currsum=0,maxsum=INT16_MIN;
     for(int val : nums){
        currsum+=val;
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}
int main(){
    vector<int>nums={2,3,4,5,8};
    int result=subarraysum(nums);
    cout<<"subarraysum is"<<result<<endl;
    return 0;

}