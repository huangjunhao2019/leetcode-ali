#include<iostream>
#include<string>
#include<string.h>
#include<memory>
//using namespace std;
int main(){
    char *s=new char[1]();
    strcat(s,"hello ");
    strcat(s,"world");
    std::cout<<s<<std::endl;
    delete [] s;

    std::string str1{"hello "},str2{"world"};
    std::cout<<str1+str2<<std::endl;
    return 0;
}