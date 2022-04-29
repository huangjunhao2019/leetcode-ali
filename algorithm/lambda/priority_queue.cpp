#include<iostream>
#include<queue>
using namespace std;
int main(){
    auto cmp=[](int a,int b){
        return a<b;
    };
    priority_queue<int,vector<int>,decltype(cmp)> que(cmp);
    for(int i=0;i<10;i++){
        que.push(i);
    }
    while(!que.empty()){
        cout<<que.top()<<endl;
        que.pop();
    }
    return 0;
}