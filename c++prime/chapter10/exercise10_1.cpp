#include<iostream>
#include<random>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums;
    for(int i=0;i<10;i++){
        nums.push_back(rand()%10);
    }
    int target;
    while(cin>>target){
        int times=count(nums.begin(),nums.end(),target);
        cout<<target<<" "<<times<<endl;
    }
    return 0;
}