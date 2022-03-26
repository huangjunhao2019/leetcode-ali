#include<iostream>
#include<vector>
using namespace std;
void shell_sort(vector<int> &nums){
    for(int step=nums.size()/2;step>=1;step/=2){
        for(int i=step;i<nums.size();i++){
            int j=i-step;
            int val=nums[i];
            while(j>=0 && nums[j]>val){
                nums[j+step]=nums[j];
                j-=step;
            }
            nums[j+step]=val;
        }
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<19;i++){
        nums.push_back(10-i);
    }
    shell_sort(nums);
    //cout<<"hello"<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}