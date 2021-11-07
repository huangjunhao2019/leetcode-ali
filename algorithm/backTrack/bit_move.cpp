#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=2;
    int result=a<<b-1;//result=4,而不是7，充分说明移位运算基本是运算里面，优先级最低的
    cout<<result<<endl;
    return 0;
}
