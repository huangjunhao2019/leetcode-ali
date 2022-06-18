#ifndef EXERCISE14_2
#define EXERCISE14_2
#include<string>
#include<iostream>
class SalesData{
    friend std::istream &operator >>(std::istream&,SalesData &);
    friend std::ostream &operator <<(std::ostream&,const SalesData&);
    friend SalesData operator+(const SalesData &,const SalesData&);
public:
    SalesData(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p){}
    SalesData():SalesData("",0,0.0){}
    SalesData(const std::string &s):SalesData(s,0,0){}
    SalesData(std::istream &is);

    SalesData &operator+=(const SalesData&);
    std::string isbn() const{
        return bookNo;
    }

private:
    inline double avg_price() const;
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};
#endif