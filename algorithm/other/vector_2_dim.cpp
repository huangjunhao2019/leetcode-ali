#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> num(2,vector<int>(3));
    int n=num.size();
    int m=num[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}