#include<iostream>
#include<sstream>
using namespace std;
istream &func(istream &is){
    string buf;
    while(is>>buf){
        cout<<buf<<endl;
    }
    return is;
}
int main(){
    istringstream iss("hello word");
    func(iss);
    return 0;
}