#include<iostream>
#include<vector>
using namespace std;
#define NDEBUG
void print(vector<int>::iterator first,vector<int>::iterator last){
    #ifndef NDEBUG
        cout<<"vector size: "<<last-first<<endl;
    #endif
    if(first==last){
        return;
    }
    #ifndef NDEBUG
        cout<<"God bless you"<<endl;
    #endif
    cout<<*(first++)<<endl;
    print(first,last);
}
int main(){
    vector<int> vec={1,2,3,4};
    print(vec.begin(),vec.end());
    return 0;
}