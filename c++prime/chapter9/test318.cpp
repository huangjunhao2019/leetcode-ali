#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int oldVec=0;
    for(int i=0;i<2000;i++){
        if(oldVec!=vec.capacity()){
            cout<<oldVec<<" "<<vec.capacity()<<" "<<vec.size()<<endl;
            oldVec=vec.capacity();
        }
        vec.push_back(i);
    }
    return 0;
}