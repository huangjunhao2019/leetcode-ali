#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct cmp1{
    bool operator()(int a,int b){
        return a>b;
    }
};
int main(){
    /*priority_queue<int,vector<int>> que1;
    for(int i=0;i<10;i++){
        que1.push(i);
    }
    for(int i=0;i<10;i++){
        cout<<que1.top()<<endl;
        que1.pop();
    }
    return 0;*/
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(10-i);
    }
   // sort(nums.begin(),nums.end(),cmp1);
    for(int i=0;i<10;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}