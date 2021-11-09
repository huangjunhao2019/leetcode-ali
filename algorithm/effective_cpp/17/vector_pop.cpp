#include<iostream>
#include<vector>
using namespace std;
/*
* 实验说明当vector的capacity变化的时候，会重新分配地址。nums的地址会改变。
*/
int main(){
    vector<int> nums(1);
    //nums.begin();
    cout<<&nums[0]<<endl;
    int sz=nums.capacity();
    for(int i=0;i<100;i++){
        if(sz!=nums.capacity()){
           // nums.push_back(i);
            cout<<&nums[0]<<endl;
            sz=nums.capacity();
        }
        nums.push_back(i);
    }
    return 0;
}