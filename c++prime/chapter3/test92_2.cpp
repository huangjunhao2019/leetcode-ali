#include<iostream>
#include<vector>
using namespace std;
int main(){
    //we varify that :vector<int> v({1,2}) or vector<int> v={1,2} or vector<int> v{1,2}is
    //ok
    vector<int> v({1,2,3,4,5,6,7,8,9});
    for(auto &i:v){
        i*=i;
    }
    for(auto i:v){
        cout<<i<<endl;
    }
    return 0;
}