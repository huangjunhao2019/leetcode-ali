#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> result;
vector<int> path;
void backTrack(int n,int k,int startIndex){
    if(path.size()==k){
        result.push_back(path);
        return;
    }
    for(int i=startIndex;i<=n;i++){
        path.push_back(i);
        backTrack(n,k,i+1);
        path.pop_back();
    }
}
int main(){
    int n=3;
    int k=2;
    backTrack(n,k,1);
    return 0;
}