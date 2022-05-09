#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> scores(11,0);
    int grade;
    while(cin>>grade){
        if(grade<=100){
            scores[grade/10]++;
        }
    }
    for(int i=0;i<scores.size();i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    return 0;
}