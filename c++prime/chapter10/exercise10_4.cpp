#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector<double> vd={1.1,0.5,3.3};
    cout<<accumulate(vd.begin(),vd.end(),0.0)<<endl;
    return 0;
}