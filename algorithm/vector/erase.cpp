#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(i);
    }
    for(auto it=nums.begin();it!=nums.end();it++){
        if(it==nums.begin()+8){
            nums.erase(it);
        }
        cout<<*it<<endl;
    }
    return 0;
}