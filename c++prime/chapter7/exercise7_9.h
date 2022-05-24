#ifndef EXERCISE7_9
#define EXERCISE7_9
#include<string>
#include<iostream>
struct Person
{
    std::string const& getName() const{
        return name;
    }
    std::string const &getAddress() const{
        return address;
    }
    std::string name;
    std::string address;
};
std::istream &read(std::istream &is,Person &person){
    return is>>person.name>>person.address;
}
std::ostream &print(std::ostream &os,const Person &person){
    return os<<person.name<<" "<<person.address;
}

#endif