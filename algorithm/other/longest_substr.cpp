#include<iostream>
#include<string>
#include<vector>
using namespace std;
int findLongest(string &s,string &t){
    int n=s.size();
    int m=t.size();
    vector<vector<int>> commonMatrix(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0){
                if(s[i]==t[j]){
                    commonMatrix[i][j]=1;
                }
                else{
                    commonMatrix[i][j]=0;
                }
            }
            else if(j==0){
                if(s[i]==t[j]){
                    commonMatrix[i][j]=1;
                }

            }
            else{
                if(s[i]==t[j]){
                    commonMatrix[i][j]=commonMatrix[i-1][j-1]+1;
                }
                else{
                    commonMatrix[i][j]=0;
                }
            }
        }
    }
    return commonMatrix[n-1][m-1];
}
int main(){
    string s="huang";
    string t="jun";
    int result=findLongest(s,t);
    cout<<result<<endl;
    return 0;
}