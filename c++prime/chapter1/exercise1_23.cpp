#include<iostream>
#include"Sales_item.h"
int main(){
    Sales_item curr,value;
    if(std::cin>>curr){
        int count=1;
        while(std::cin>>value){
            //int count=1;
            if(value.isbn()==curr.isbn()){
                count++;
            }
            else{
                std::cout<<curr<<" occurs "<<count<<" times"<<std::endl;
                count=1;
                curr=value;
            }
        }
        std::cout<<curr<<" occurs "<<count<<" times"<<std::endl;
    }
    return 0;
}