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
void f(numbered s){
    std::cout<<s.mysn<<std::endl;
}
int main(){
    numbered a,b=a,c=b;
    std::cout<<a.mysn<<" "<<b.mysn<<" "<<c.mysn<<std::endl;
    f(a);
    f(b);
    f(c);
    return 0;
}