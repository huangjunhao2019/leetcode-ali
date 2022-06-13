#ifndef EXERCISE13_18
#define EXERCISE13_18
#include<string>
using namespace std;
class Employee{
public:
    Employee();
    Employee(const string &name);
    const int id(){
        return id_;
    }
private:
    string name_;
    int id_;
    static int s_increment;

};
int Employee::s_increment=0;
Employee::Employee(){
    id_=s_increment;
}
Employee::Employee(const string &name){
    id_=s_increment++;
    name_=name;
}
#endif