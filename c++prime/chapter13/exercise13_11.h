#ifndef EXERCISE13_11
#define EXERCISE13_11
#include<string>
class HasPtr{
public:
    HasPtr(const std::string &s=std::string()):ps(new std::string()),i(0){}
    HasPtr(const HasPtr &hp):ps(new std::string(*hp.ps)),i(hp.i){}
    HasPtr &operator=(const HasPtr &hp){
        std::string *new_ps=new std::string(*hp.ps);
        delete ps;
        ps=new_ps;
        i=hp.i;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    }
private:
    std::string *ps;
    int i;
};
#endif