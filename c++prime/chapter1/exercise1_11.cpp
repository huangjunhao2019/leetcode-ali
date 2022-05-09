#include<iostream>
int main(){
    std::cout<<"Enter two numbers "<<std::endl;
    int low=0;
    int high=0;
    std::cin>>low>>high;
    if(low>high){
        int temp=low;
        low=high;
        high=temp;
    }
    while(low<=high){
        std::cout<<low<<std::endl;
        low++;
    }
    return 0;
}