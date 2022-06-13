#include"exercise13_31.h"
#include<algorithm>
#include<vector>
int main(){
    HasPtr s{"s"},a{"a"},c{"c"};
    s.show();
    a.show();
    c.show();
    std::cout<<"hello"<<std::endl;
    a.print(c);
    std::vector<HasPtr> vec{s,a,c};
    for(auto &ele:vec){
        ele.show();
    }
    std::sort(vec.begin(),vec.end());
    for(auto &ele:vec){
        ele.show();
    }
    return 0;
}