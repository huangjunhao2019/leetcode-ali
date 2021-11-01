#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<vector<int>,int> mp;
    for(int i=0;i<10;i++){
        vector<int> vec(10,0);
        mp[vec]=i;
    }
    vector<int> temp(10,0);

    return 0;
}