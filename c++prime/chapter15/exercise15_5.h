#ifndef EXERCISE15_5
#define EXERCISE15_5
#include"exercise15_3.h"
class Bulk_quote:public Quote{
public:
    Bulk_quote()=default;
    Bulk_quote(const std::string &b,double p,std::size_t q,double disc):Quote(b,p),min_qty(q),discount(disc){}
    double net_price(std::size_t n) const override{
        if(n>=min_qty){
            return n*(1-discount)*price;
        }
        else{
            return n*price;
        }
    }
private:
    std::size_t min_qty=0;
    double discount=0.0;
};
#endif