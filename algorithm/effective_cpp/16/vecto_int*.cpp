#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums(10,10);
    int *p=&nums[0];
    for(int i=0;p!=nullptr;p++,i++){
        cout<<*p<<endl;
    }
    return 0;
}