#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> weight={1,3,4};
    vector<int> value={15,20,30};
    int bagweight=4;
    vector<int> dp(bagweight+1,0);
    for(int i=0;i<weight.size();i++){
        for(int j=weight[i];j<=bagweight;j++){
            dp[j]=max(dp[j-weight[i]]+value[i],dp[j]);
        }
    }
    cout<<dp[bagweight]<<endl;
    return 0;
}