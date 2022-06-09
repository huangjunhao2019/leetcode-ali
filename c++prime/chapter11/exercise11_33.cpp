#include<iostream>
#include<map>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
void wordTransform(ifstream &,ifstream &);
map<string,string> buildMap(ifstream &);
string transform(const string &,map<string,string> &);
int main(){
    ifstream ifs_map("./map_file.txt");
    ifstream ifs_input("./input.txt");
    wordTransform(ifs_map,ifs_input);
    return 0;
}
void wordTransform(ifstream &mapFile,ifstream &input){
    auto ruleMap=buildMap(mapFile);
    string text;
    while(getline(input,text)){
        istringstream stream(text);
        string word;
        bool firstword=true;
        while(stream>>word){
            if(firstword){
                firstword=false;
            }
            else{
                cout<<" ";
            }
            cout<<transform(word,ruleMap);
        }
        cout<<endl;
    }
}
map<string,string> buildMap(ifstream &ruleFile){
    map<string,string> mp;
    string key;
    string value;
    while(ruleFile>>key && getline(ruleFile,value)){
        if(value.size()>1){
            mp[key]=value.substr(1);
        }
        else{
            throw runtime_error("no rule for "+key);
        }
    }
    return mp;
}
string transform(const string &s,map<string,string> &mp){
    auto it=mp.find(s);
    if(it!=mp.end()){
        return it->second;
    }
    else
        return s;
}