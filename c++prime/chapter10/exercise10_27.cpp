#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main(){
    vector<int> vec={1,1,1,2,2};
    list<int> lst;

    unique_copy(vec.begin(),vec.end(),back_inserter(lst));
    for(auto &ele:lst){
        cout<<ele<<endl;
    }
    return 0;
}