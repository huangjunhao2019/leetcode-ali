#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ifstream ifs("./book.txt");
    if(!ifs){
        cerr<<"No data?"<<endl;
        return -1;
    }
    vector<string> vecLine;
    string line;
    while(getline(ifs,line)){
        vecLine.push_back(line);
    }
    for(auto &s:vecLine){
        istringstream iss(s);
        string word;
        while(iss>>word){
            cout<<word<<endl;
        }
    }
    return 0;
}