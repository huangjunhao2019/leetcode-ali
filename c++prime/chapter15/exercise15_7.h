#ifndef EXERCISE15_7
#define EXERCISE15_7
#include"exercise15_5.h"
class Limit_quote:public Quote{
public:
    Limit_quote()=default;
    Limit_quote(const std::string &b,double p,std::size_t max,double disc):
    Quote(b,p),max_qty(max),discount(disc){}
    double net_price(std::size_t n) const override;
private:
    std::size_t max_qty=0;
    double discount=0.0;
};
double Limit_quote::net_price(std::size_t n) const{
    if(n>max_qty){
        return max_qty*price*(1-discount)+(n-max_qty)*price;
    }
    else{
        return n*(1-discount)*price;
    }
}
#endif