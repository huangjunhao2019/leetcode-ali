#ifndef QUOTE_H
#define QUOTE_H
#include<string>
#include<iostream>
class Quote{
    friend bool operator!=(const Quote &lhs,const Quote &rhs);
public:
    Quote(){
        std::cout<<"default constructing Quote"<<std::endl;
    }
    Quote(const std::string &b,double p):bookNo(b),price(p){
        std::cout<<"Quote: constructor taking 2 parameters\n";
    }
    Quote(const Quote &q):bookNo(q.bookNo),price(q.price){
        std::cout<<"Quote: copy constructing"<<std::endl;
    }
    Quote(Quote &&q) noexcept:bookNo(std::move(q.bookNo)),price(std::move(q.price)){
        std::cout<<"Quote: move constructing"<<std::endl;
    }
    Quote &operator=(const Quote &rhs){
        if(*this!=rhs){
            bookNo=rhs.bookNo;
            price=rhs.price;
        }
        std::cout<<"Quote: copy=()"<<std::endl;
        return *this;
    }
    Quote &operator=(Quote &&rhs) noexcept{
        if(*this!=rhs){
            bookNo=std::move(rhs.bookNo);
            price=std::move(rhs.price);
        }
        std::cout<<"Quote: move=!!"<<std::endl;
        return *this;
    }
    virtual Quote* clone() const &{
        return new Quote(*this);
    }
    virtual Quote *clone()&&{
        return new Quote(std::move(*this));
    }
    std::string isbn() const{
        return bookNo;
    }
    virtual double net_price(std::size_t n) const{
        return n*price;
    }
    virtual void debug() const;
    virtual ~Quote(){
        std::cout<<"destructing Quote"<<std::endl;
    }
private:
    std::string bookNo;
protected:
    double price=0.0;
};
bool inline operator !=(const Quote &lhs,const Quote &rhs){
    return lhs.bookNo!=rhs.bookNo && lhs.price!=rhs.price;
}
double print_total(std::ostream &os,const Quote &item,size_t n);
#endif