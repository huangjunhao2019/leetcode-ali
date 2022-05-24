#ifndef EXERCISE7_5
#define EXERCISE7_5
#include<string>
class Person{
    std::string name;
    std::string address;
    public:
        auto get_name(){
            return name;
        }
        auto get_addr(){
            return address;
        }
};
#endif