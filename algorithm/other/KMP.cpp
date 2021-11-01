#include<iostream>
#include<string>
#include<vector>
using namespace std;
void getNext(vector<int> &next,string &s){
    int j=0;
    next[0]=0;
    for(int i=1;i<s.size();i++){
        while(j>0 && s[i]!=s[j]){
            j=next[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        next[i]=j;
    }
}
int strStr(string haystack,string needle){
    if(needle.size()==0)
        return 0;
    vector<int> next(needle.size(),0);
    int j=0;
    getNext(next,needle);
    for(int i=0;i<haystack.size();i++){
        while(j>0 && haystack[i]!=needle[j]){
            j=next[j-1];
        }
        if(haystack[i]==needle[j]){
            j++;
        }
        if(j==needle.size()){
            return i-needle.size()+1;
        }
    }
    return -1;
}
int main(){
    string s="aabaaf";
    vector<int> next(s.size(),0);
    getNext(next,s);
    return 0;
}