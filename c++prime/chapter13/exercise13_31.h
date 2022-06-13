#ifndef EXERCISE13_31
#define EXERCISE13_31
#include<string>
#include<iostream>
class HasPtr{
public:
    friend void swap(HasPtr &,HasPtr &);
    friend bool operator<(const HasPtr &lhs,const HasPtr &rhs);
    HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
    HasPtr(const HasPtr &hp):ps(new std::string(*hp.ps)),i(hp.i){}
    HasPtr &operator =(HasPtr tmp){
        //this->swap(tmp);
        *ps=*tmp.ps;//bug出在此处，指针直接赋值，相等与直接还是指向同样位置
        i=tmp.i;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    }
    void swap(HasPtr &rhs){
        std::swap(ps,rhs.ps);
        std::swap(i,rhs.i);//从一个实例里面访问另一个实例，能行吗？确实可以，用print证明了
        std::cout<<"call swap(HasPtr &rhs)"<<std::endl;
    }
    void print(HasPtr a){
        std::cout<<a.i<<std::endl;
    }
    void show() const{
        std::cout<<*ps<<std::endl;
    }
private:
    std::string *ps;
    int i;
};
void swap(HasPtr &lhs,HasPtr &rhs){
    lhs.swap(rhs);
}
bool operator<(const HasPtr &lhs,const HasPtr &rhs){
    return *lhs.ps<*rhs.ps;
}

#endif