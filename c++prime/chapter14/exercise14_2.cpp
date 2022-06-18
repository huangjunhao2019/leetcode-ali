#include"exercise14_2.h"
SalesData::SalesData(std::istream &is):SalesData(){
    is>>*this;
}
SalesData &SalesData::operator+=(const SalesData &rhs){
    units_sold+=rhs.units_sold;
    revenue=rhs.revenue;
    return *this;
}
std::istream &operator>>(std::istream &is,SalesData &item){
    double price=0.0;
    is>>item.bookNo>>item.units_sold>>price;
    if(is){
        item.revenue=price*item.units_sold;
    }
    else{
        item=SalesData();
    }
    return is;
}
std::ostream &operator<<(std::ostream &os,const SalesData &item){
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
    return os;
}
SalesData operator+(const SalesData &lhs,const SalesData &rhs){
    SalesData sum=lhs;
    sum+=rhs;
    return sum;
}