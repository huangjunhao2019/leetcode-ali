#include"exercise15_5.h"
#include<iostream>
#include<string>
#include<vector>
#include<memory>
int main(){
    std::vector<Quote> basket1;
    basket1.push_back(Quote("123",50));
    basket1.push_back(Bulk_quote("123",50,10,0.25));
    for(auto &item:basket1){
        std::cout<<item.net_price(15)<<std::endl;
    }
    
    std::vector<std::shared_ptr<Quote>> basket2;
    basket2.push_back(std::make_shared<Quote>("123",50));
    basket2.push_back(std::make_shared<Bulk_quote>("123",50,10,0.25));
    for(auto &item:basket2){
        std::cout<<item->net_price(15)<<std::endl;
    }
    return 0;
}