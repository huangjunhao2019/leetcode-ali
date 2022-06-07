#include<iostream>
#include<string>
using namespace std;
struct Person{
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
int main(){
    Person huang("huang",24);
    cout<<huang.name<<" "<<huang.age<<endl;
    return 0;
}