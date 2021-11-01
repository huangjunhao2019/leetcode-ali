#include<iostream>
#include<vector>
using namespace std;
void insert_sort(vector<int> &nums){
    for(int i=1;i<nums.size();i++){
        int j=i-1;
        int val=nums[i];
        while(j>=0 && nums[j]>val){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=val;
    }
}
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
    insert_sort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
