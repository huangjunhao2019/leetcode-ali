#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int solve(vector<vector<int>> &vec, int volume){
    int row=vec.size();
    int colum=volume;
    vector<int> result;
    vector<vector<int>> dp(row,vector<int>(colum+1,0));
    for(int i=0;i<row;i++){
        for(int j=1;j<=colum;j++){
            if(i==0){
                if(vec[0][0]<=j)
                    dp[i][j]=vec[0][1];
            }
            else{
                if(j>=vec[i][0]){
                     dp[i][j]=max(dp[i-1][j],vec[i][1]+dp[i-1][j-vec[i][0]]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[row-1][colum];
}
int main(){
    /*unordered_map<string,vector<int>> mp;
    mp["water"]={3,10};
    mp["book"]={1,3};
    mp["food"]={2,9};
    mp["jacket"]={2,5};
    mp["camera"]={1,6};*/
    vector<vector<int>> vec;
    vec.push_back({3,10});
    vec.push_back({1,3});
    vec.push_back({2,9});
    vec.push_back({2,5});
    vec.push_back({1,6});
    int volume=6;
    int result=solve(vec,volume);
    cout<<"result: "<<result<<endl;
    return 0;
}