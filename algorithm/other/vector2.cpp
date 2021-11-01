#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &a){
    int left=a[0];
    cout<<left<<endl;
}
int main(){
    vector<int> a(10);
    for(int i=0;i<9;i++){
        a[i]=i;
    }
    solve(a);
    return 0;
}