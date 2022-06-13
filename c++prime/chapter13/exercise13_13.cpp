#include<iostream>
#include<vector>
#include<initializer_list>
using namespace std;
class X{
public:
    X(){std::cout<<"X()"<<std::endl;}
    X(const X&){
        std::cout<<"X(const X&)"<<std::endl;
        //return *this;
    }
    X& operator=(const X&){
        std::cout<<"X& operator=(const X&)"<<std::endl;
        return *this;
    }
    ~X(){
        std::cout<<"~X()"<<std::endl;
    }
};
void f(const X rx){
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);
   // vec.push_back(x);
}
int main(){
    X *px=new X;
    f(*px);
  //  X temp=*px;
    delete px;
    return 0;
}