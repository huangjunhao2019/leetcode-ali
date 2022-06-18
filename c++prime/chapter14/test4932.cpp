#include"test4932.h"
#include"test4932.h"
#include<string>
#include<iostream>
using namespace std;
void Student::print(){
    cout<<"stuNo: "<<stuNo<<" stuName: "<<stuName<<endl;
}
int main(){
    Student huang("huang","2020");
    huang.print();
    return 0;
}
