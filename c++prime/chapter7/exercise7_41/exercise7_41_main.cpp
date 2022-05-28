#include"exercise7_41.h"
using namespace std;
int main(){
    cout<<"1. default way: "<<endl;
    cout<<"----------------"<<endl;
    Sales_data s1;

    cout<<"2. use std::string as a parameter: "<<endl;
    cout<<"-----------------------------------"<<endl;
    Sales_data s2("CPP-PRIMER-5th");

    cout<<"3. complete parameters: "<<endl;
    cout<<"------------------------"<<endl;
    Sales_data s3("CPP-PRIMER-5th",3,25.8);

    cout<<"4. use istream as parameter: "<<endl;
    cout<<"-----------------------------"<<endl;
    Sales_data s4(std::cin);
    return 0;
}