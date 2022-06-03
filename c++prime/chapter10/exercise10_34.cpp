#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    /*for(auto it=v.crbegin();it!=v.crend();++it){
        cout<<*it<<endl;
    }*/
    for(auto it=v.end()-1;;--it){
        cout<<*it<<endl;
        if(it==v.begin()){
            break;
        }
    }
    return 0;
}