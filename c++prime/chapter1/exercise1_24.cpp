#include<iostream>
#include"Sales_item.h"
int main(){
    Sales_item total,val;
    if(std::cin>>total){
        while(std::cin>>val){
            if(total.isbn()==val.isbn()){
                total+=val;
            }
            else{
                std::cout<<total<<std::endl;
                total=val;
            }
        }
        std::cout<<total<<std::endl;
    }
    else{
        std::cerr<<"No data?"<<std::endl;
        return -1;
    }
    return 0;
}