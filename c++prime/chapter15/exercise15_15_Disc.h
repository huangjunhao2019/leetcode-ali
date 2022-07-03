#ifndef EXERCISE15_15
#define EXERCISE15_15
#include"exercise15_3.h"
class Disc_quote:public Quote{
public:
    Disc_quote()=default;
    Disc_quote(const std::string &b,double p,std::size_t q,double d):
        Quote(b,p),quantity(q),discount(d){}
    virtual double net_price(std::size_t n) const override=0;
protected:
    std::size_t quantity;
    double discount;
};
#endif