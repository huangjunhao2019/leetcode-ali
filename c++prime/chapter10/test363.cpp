#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={0,1,2,3,4,5,6,7,8,9};
    for(auto iter=vec.rbegin();iter!=vec.rend();++iter){
        cout<<*iter<<" ";
    }
    cout<<endl;
    return 0;
}