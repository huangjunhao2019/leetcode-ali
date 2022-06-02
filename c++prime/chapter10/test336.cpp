#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
using namespace std;
int main(){
    vector<int> vec;
    for(int i=0;i<10;i++){
        vec.push_back(rand());
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    int num;
    while(cin>>num){
        auto result=find(vec.begin(),vec.end(),num);
        cout<<"The value "<<num<<(result==vec.end()? "is not present":"is present")<<endl;
    }
    return 0;
}