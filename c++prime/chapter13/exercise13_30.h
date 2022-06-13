#ifndef EXERCISE13_30
#define EXERCISE13_30
#include<string>
#include<iostream>
class HasPtr{
private:
    std::string *ps;
    int i;
    //size_t *use;
public:
    friend void swap(HasPtr &,HasPtr &);
    HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
    HasPtr(const HasPtr &hp):ps(hp.ps),i(hp.i){}
    HasPtr &operator=(const HasPtr &rhs){
        //++*rhs.use;
        //if(--*use==0){
           // delete ps;
           // delete use;
      //  }
        ps=rhs.ps;
        i=rhs.i;
       // use=rhs.use;
        return *this;
    }
    ~HasPtr(){
      //  if(--*use==0){
            delete ps;
           // delete use;
       // }
    }
    void show(){
        std::cout<<*ps<<std::endl;
    }
};
inline void swap(HasPtr &lhs,HasPtr &rhs){
    std::swap(lhs.ps,rhs.ps);
    std::swap(lhs.i,rhs.i);
    std::cout<<"call swap(Hasptr &lhs,Hasptr &rhs)"<<std::endl;
}
#endif