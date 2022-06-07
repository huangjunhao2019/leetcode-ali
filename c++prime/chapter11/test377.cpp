#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<int,string> mp={{1,"huang"},{2,"jun"},{3,"hao"}};
    for(auto &it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}