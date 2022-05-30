#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vi={0,1,2};
    auto iter=vi.begin();
    while(iter!=vi.end()){
        if(*iter%2==1){
            iter=vi.insert(iter,*iter);
            iter+=2;
        }
        else{
            iter++;
        }
    }
    for(auto &num:vi){
        cout<<num<<endl;
    }
    return 0;
}