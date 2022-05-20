#include<iostream>
#include<string>
using namespace std;
int findChar(const string &s,char c,int &occurs){
    int ret=-1;
    occurs=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            if(ret==-1){
                ret=i;
            }
            ++occurs;
        }
    }
    return ret;
}
int main(){
    //string s="huangjunhaoj";
    char ch='j';
    int occur=0;
    cout<<findChar("huangjunhao",ch,occur)<<" "<<occur<<endl;
    return 0;
}