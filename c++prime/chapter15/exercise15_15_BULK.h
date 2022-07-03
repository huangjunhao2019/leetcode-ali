#ifndef EXERCISE15_15_BULK
#define EXERCISE15_15_BULK
#include"exercise15_15_Disc.h"
class Bulk_quote:public Disc_quote{
    Bulk_quote()=default;
    Bulk_quote(const std::string &b,double p,std::size_t q,double disc):
        Disc_quote(b,p,q,disc){}
    double net_price(std::size_t n) const override;
};
#endif