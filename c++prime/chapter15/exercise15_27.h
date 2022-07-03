#ifndef EXERCISE15_27
#define EXERCISE15_27
#include"exercise15_15_Disc.h"
#include<iostream>
class Bulk_quote:public Disc_quote{
public:
    Bulk_quote(){
        std::cout<<"default constructing Bulk_quote\n";
    }
    using Disc_quote::Disc_quote;
    Bulk_quote(const Bulk_quote &bq):Disc_quote(bq){
        std::cout<<"Bulk_quote: copy constructor"<<std::endl;
    }
    Bulk_quote(const Bulk_quote &&bq):Disc_quote(std::move(bq)){
        std::cout<<"Bulk_quote: move constructor"<<std::endl;
    }
    Bulk_quote &operator=(const Bulk_quote &rhs){
        Disc_quote::operator=(rhs);
        std::cout<<"Bulk_quote: copy=()"<<std::endl;
        return *this;
    }
    Bulk_quote &operator =(Bulk_quote &&rhs){
        Disc_quote::operator=(std::move(rhs));
        std::cout<<"Bulk_quote: move=()"<<std::endl;
        return *this;
    }
    double net_price(std::size_t n) const override;
    //void debug() const override;
    ~Bulk_quote() override{
        std::cout<<"destructing Bulk_quote"<<std::endl;
    }
};
#endif