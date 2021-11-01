#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums(10,0);
    vector<int> vec(nums.begin()+10,nums.end());
    return 0;
}