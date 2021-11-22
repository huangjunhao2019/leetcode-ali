#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> weight={1,3,4};
    vector<int> value={15,20,30};
    int bagweight=4;
    vector<vector<int>> dp(weight.size(),vector<int>(bagweight+1,0));
    for(int j=0;j<bagweight+1;j++){
        if(j>=weight[0]){
            dp[0][j]=value[0];
        }
    }
    for(int i=1;i<dp.size();i++){
        for(int j=1;j<dp[i].size();j++){
            if(j<weight[i]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
            }
        }
    }
    cout<<dp[weight.size()-1][bagweight]<<endl;
    return 0;
}