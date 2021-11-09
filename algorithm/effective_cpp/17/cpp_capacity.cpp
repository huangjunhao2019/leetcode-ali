#include<iostream>
#include<vector>
using namespace std;
/*
*   证明了capacity和size是不相等的，在插入的时候，capacity是增加的，删除的时候，调用pop_back()
与 erase(), capacity并没有减少
*/
int main(){
    vector<int> nums;
    int sz=nums.capacity();
    for(int i=0;i<100;i++){
        if(sz!=nums.capacity()){
            cout<<i<<" : "<<nums.capacity()<<endl;
            sz=nums.capacity();
        }
        nums.push_back(i);
       // vector<int>().swap(nums);
    }
 /*   for(int i=0;i<100;i++){
        if(sz!=nums.capacity()){
            cout<<i<<": "<<nums.capacity()<<endl;
            sz=nums.capacity();
        }
        nums.erase(nums.begin());
    }*/
    for(int i=0;i<50;i++){
        nums.pop_back();
        vector<int>(nums).swap(nums);
        cout<<nums.size()<<" "<<nums.capacity()<<endl;
    }
    cout<<nums.size()<<" "<<nums.capacity()<<endl;
    return 0;
}