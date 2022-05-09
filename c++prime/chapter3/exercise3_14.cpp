#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int num;
    while(cin>>num){
        nums.push_back(num);
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}