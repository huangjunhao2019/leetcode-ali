#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(i);
    }
    cout<<"end "<<*nums.end()<<endl;
    for(auto it=nums.begin();it!=nums.end();){
        nums.erase(it);
        if(it==nums.end()){
            cout<<"hi"<<endl;
        }
        cout<<*it<<endl;
    }
    cout<<"end "<<*nums.end()<<endl;
    cout<<"begin "<<*nums.begin()<<endl;
    cout<<nums.size()<<endl;
    return 0;
}