#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int temp;
    while(cin>>temp){
        nums.push_back(temp);
    }
    for(int i=0;i<nums.size();i+=2){
        if(i+1<nums.size()){
            cout<<nums[i]+nums[i+1]<<" ";
        }
        else{
            cout<<nums[i]<<" ";
        }
    }
    cout<<endl;
    for(int i=0,j=nums.size()-1;i<=j;i++,j--){
        cout<<nums[i]+nums[j]<<" ";
    }
    cout<<endl;
    return 0;
}