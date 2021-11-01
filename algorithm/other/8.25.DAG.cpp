#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> ans;
vector<int> stk;
void dfs(vector<vector<int>> &graph,int x,int n){
    if(x==n){
        ans.push_back(stk);
        for(auto temp:stk){
            cout<<temp<<" ";
        }
        cout<<endl;
        return;
    }
    for(auto &y:graph[x]){
        cout<<x<<" "<<y<<endl;
        stk.push_back(y);
        dfs(graph,y,n);
        stk.pop_back();
    }
}
vector<vector<int>> allPathSourceTarget(vector<vector<int>> &graph){
    stk.push_back(0);
    dfs(graph,0,graph.size());
    return ans;
}
int main(){
    vector<vector<int>> graph;
    vector<int> temp;
    temp.push_back(1);
    temp.push_back(2);
    graph.push_back(temp);
    vector<int> temp2;
    temp2.push_back(3);
    graph.push_back(temp2);
    vector<int> temp3;
    temp3.push_back(3);
    graph.push_back(temp3);
    allPathSourceTarget(graph);
  //  cout<<graph
    return 0;
}