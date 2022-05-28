#include<iostream>
#include<string>
int main(){
    std::string s("hello");//“hello"是指const char *, 所谓没有
    //explicit 就是指，"hello"可以直接转化为string
    std::cout<<sizeof s<<std::endl;
    return 0;

}