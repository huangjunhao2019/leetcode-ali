#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int oldCap=0;
    string::iterator it=s.begin();
    for(int i=0;i<100;i++){
        if(oldCap!=s.capacity()){
            if(it!=s.begin()){
                cout<<" s change"<<endl;
            }
            cout<<oldCap<<" "<<s.capacity()<<" "<<s.size()<<endl;
            oldCap=s.capacity();
        }
        s.push_back('a');
    }
    return 0;
}