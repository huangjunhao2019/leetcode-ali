#include<iostream>
#include<string>
#include<map>
#include<functional>
int add(int i,int j){
    return i+j;
}
auto mod=[](int i,int j){
    return i%j;
};
class Div{
public:
    int operator()(int i,int j) const {
        return i/j;
    }
};
auto binops=std::map<std::string,std::function<int(int,int)>>{
    {"+",add},
    {"-",std::minus<int>()},
    {"/",Div()},
    {"*",[](int i,int j){return i*j;}},
    {"%",mod}
};
int main(){
    while(std::cout<<"Pls enter as: num operator num:"<<std::endl,true){
        int lhs,rhs;
        std::string op;
        std::cin>>lhs>>op>>rhs;
        std::cout<<binops[op](lhs,rhs)<<std::endl;
    }
    return 0;
}