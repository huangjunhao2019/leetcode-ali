#include<iostream>
class numbered{
public:
    numbered(){
        mysn=unique++;
    }
    numbered(const numbered &n){
        mysn=unique++;
    }
    int mysn;
    static int unique;
};
int numbered::unique=10;
void f(const numbered &s){
    std::cout<<s.mysn<<std::endl;
}
int main(){
    numbered a,b=a,c=b;
    auto *p=&a;
    int e=10;
    auto *q=&e;
    std::cout<<sizeof(q)<<std::endl;
    std::cout<<sizeof(p)<<std::endl;
    std::cout<<a.mysn<<" "<<b.mysn<<" "<<c.mysn<<std::endl;
    f(a);
    f(b);
    f(c);
    return 0;
}