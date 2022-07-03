#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> us={1,2,3};
    cout<<*(us.begin()+1)<<endl;
    return 0;
}