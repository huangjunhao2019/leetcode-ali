#include<iostream>
#include<vector>
using namespace std;
vector<int> path;
int result=0;
int max_result=0;
int w=0;
void backTrack(vector<int> &weight,vector<int> &value,int bagweight,int startIndex){
    if(startIndex>weight.size()){
        return;
    }
    for(int i=startIndex;i<weight.size();i++){
        if(w+weight[i]<=bagweight){
            result+=value[i];
            max_result=max(result,max_result);
            w+=weight[i];
            backTrack(weight,value,bagweight,i+1);
            w-=weight[i];
            result-=value[i];
        } 
    }
}
int main(){
    vector<int> weight={1,3,4};
    vector<int> value={15,20,30};
    int bagweight=4;
    backTrack(weight,value,bagweight,0);
    cout<<max_result<<endl;
    return 0;
}