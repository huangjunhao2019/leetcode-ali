#include<iostream>
#include<functional>
using namespace std;
int main(){
    plus<int> intAdd;
    negate<int> intNegate;
    int sum1=intAdd(10,20);
    cout<<sum1<<endl;
    int sum2=intNegate(intAdd(10,20));
    cout<<sum2<<endl;
    int sum3=intAdd(10,intNegate(10));
    cout<<sum3<<endl;
    greater<int> big;
    if(big(31,5)){
        cout<<"hello"<<endl;
    }
    return 0;
}