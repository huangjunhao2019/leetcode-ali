#ifndef EXERCISE7_41
#define EXERCISE7_41
#include<iostream>
#include<string>
class Sales_data{
    friend std::istream &read(std::istream &is,Sales_data &itemp);
    friend std::ostream &print(std::ostream &os,const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
public:
    Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p){
        std::cout<<"Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p)"<<std::endl;
    }
    Sales_data():Sales_data("",0,0){
        std::cout<<"Sales_data():Sales_data("",0,0)"<<std::endl;
    }
    Sales_data(const std::string &s):Sales_data(s,0,0){
        std::cout<<"Sales_data(const std::string &s):Sales_data(s,0,0)"<<std::endl;
    }
    Sales_data(std::istream &is);
    std::string isbn() const{
        return bookNo;
    }
    Sales_data &combine(const Sales_data&);

private:
    inline double avg_price() const;
private:
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};
#endif