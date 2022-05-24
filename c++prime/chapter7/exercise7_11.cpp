#include"exercise7_11.h"
int main(){
    Sales_data item1;
    print(std::cout,item1)<<std::endl;
    
    Sales_data item2("0-201-78345-x");
    print(std::cout,item2)<<std::endl;

    Sales_data item3("0-201-78345-x",3,20.0);
    print(std::cout,item3)<<std::endl;

    Sales_data item4(std::cin);
    print(std::cout,item4)<<std::endl;
    return 0;
}