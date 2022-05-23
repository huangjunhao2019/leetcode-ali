#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
void readFileToVec(const string &fileName,vector<string> &vec){
    ifstream ifs(fileName);
    if(ifs){
        string buf;
        while(ifs>>buf){
            vec.push_back(buf);
        }
    }
}
int main(){
    vector<string> vec;
    readFileToVec("./book.txt",vec);
    for(const string &str:vec){
        cout<<str<<endl;
    }
    return 0;
}