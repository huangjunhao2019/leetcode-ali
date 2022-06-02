#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> que;
    for(int i=0;i<10;i++){
        que.push(i);
    }
    while(!que.empty()){
        cout<<que.top()<<endl;
        que.pop();
    }
    return 0;
}