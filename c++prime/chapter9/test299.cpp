#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums1;
    for(int i=0;i<10;i++){
        nums1.push_back(i);
    }
    vector<int> nums2(nums1.begin(),nums1.begin()+5);
    for(auto it=nums2.begin();it!=nums2.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}