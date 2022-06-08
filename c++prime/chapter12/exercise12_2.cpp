#include<iostream>
#include"exercise12_2.h"
/*
    *
    *到底要证明什么？sb不是const，能进行赋值不是很正常嘛
    * 
*/
int main(){
    const StrBlob csb{"hello","world","pezy"};
    StrBlob sb{"hello","world","huang"};
    std::cout<<csb.front()<<" "<<csb.back()<<std::endl;
    sb.back()="pezy";
    std::cout<<sb.front()<<" "<<sb.back()<<std::endl;
    return 0;
}