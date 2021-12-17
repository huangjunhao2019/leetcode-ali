#include<iostream>
#include<queue>
using namespace std;
struct cmp1{
    bool operator()(int a,int b){
        return a>b;
    }
};
int main(){
    priority_queue<int,vector<int>,cmp1> que1;
    for(int i=0;i<10;i++){
        que1.push(i);
    }
    for(int i=0;i<10;i++){
        cout<<que1.top()<<endl;
        que1.pop();
    }
    return 0;
}