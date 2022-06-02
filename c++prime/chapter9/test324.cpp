#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="huang";
    string temp="jun";
    auto it=s.insert(s.begin(),temp.begin(),temp.end());
    cout<<*it<<endl;
    cout<<s<<endl;
    string s2="huang";
    auto it2=s2.erase(s2.begin());
    cout<<*it2<<endl;
    return 0;
}