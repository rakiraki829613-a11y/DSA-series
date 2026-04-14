#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[5]={2,3,4,5,6};
    int maxsum=INT16_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for( int end=start;end<n; end++){
            currsum=currsum+arr[end];
            maxsum=max(maxsum,currsum);
        }
    }
    cout<<"max subatrry sum"<<maxsum<<endl;
    return 0;
}