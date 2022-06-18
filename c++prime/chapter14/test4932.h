#ifndef TEST4932
#define TEST4932
#include<iostream>
#include<string>
class Student{
public:
    Student():stuNo(""),stuName(""){}
    Student(std::string name,std::string no):stuNo(name),stuName(no){}
    void print();
private:
    std::string stuNo;
    std::string stuName;
};
#endif