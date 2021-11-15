#include<iostream>
#include<vector>
using namespace std;
/*
*实验证明，在capacity变化之后，vector指向原来的iterator已经失效了
*
*/
int main(){
    vector<int> vec;
    auto it=vec.begin();
    int sz=vec.capacity();
    for(int i=0;i<10;i++){
        vec.push_back(i);
        if(sz!=vec.capacity()){
            cout<<vec.capacity()<<endl;
            sz=vec.capacity();
            cout<<*it<<endl;
        }
        
    }
    return 0;
}