#include<iostream>
int main(){
    std::cout<<"Enter two numbers: "<<std::endl;//把字符串信息写入到对象count，cout后续把信息展示到屏幕
    int v1=0,v2=0;
    std::cin>>v1>>v2;//把从屏幕读取到的信息输出到v1和v2标识的内存
    std::cout<<"The sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<<std::endl;
    return 0;
}