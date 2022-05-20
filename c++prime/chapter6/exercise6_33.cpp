#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<int>::iterator first,vector<int>::iterator second);
int main(){
    vector<int> vec={1,2,3,4,5};
    print(vec.begin(),vec.end());
    return 0;
}
void print(vector<int>::iterator first,vector<int>::iterator second){
    if(first==second){
        return;
    }
    cout<<*first<<endl;
    first++;
    print(first,second);
}