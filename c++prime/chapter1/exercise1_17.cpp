#include<iostream>
int main(){
    int curr=0,val=0;
    //int count=0;
    if(std::cin>>curr){
        int count=1;
        while(std::cin>>val){
            if(val==curr){
                count++;
            }
            else{
                std::cout<<curr<<" occurs "<<count<<" times"<<std::endl;
                curr=val;
                count=1;
            }
        }
        std::cout<<curr<<" occurs "<<count<<" times "<<std::endl;
    }
    return 0;
}