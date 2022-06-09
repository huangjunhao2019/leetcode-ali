#include<iostream>
#include<vector>
using namespace std;
class Test{
private:
    vector<int> nums;
public:
    Test(int n){
        for(int i=0;i<n;i++){
            nums.push_back(i);
        }
    }
};
int main(){
    for(int i=0;i<100000000;++i){
        auto p=new Test(100);
        delete(p);//加上delete之后，运行十分钟，没有显示killed；没加delete，一分钟就显示delete；
        //可以证明之所以killed不是因为时间，而是因为堆内存耗尽
    }
    return 0;
}