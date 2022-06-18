#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<map>
class IsInRange{
public:
    IsInRange(std::size_t lower,std::size_t upper):_lower(lower),_upper(upper){}
    bool operator()(std::string const &str) const{
        return str.size()>=_lower && str.size()<=_upper;
    }
    std::size_t lower_limit() const{
        return _lower;
    }
    std::size_t upper_limit() const{
        return _upper;
    }
private:
    std::size_t _lower;
    std::size_t _upper;
};
int main(){
    std::size_t lower=1;
    auto uppers={3,4,5,6,7,8,9,10,11};
    std::vector<IsInRange> predicates;
    for(auto upper:uppers){
        predicates.push_back(IsInRange(lower,upper));
    }
    std::map<int,int> countTable;
    std::ifstream fin("../book.txt");
    std::string word;
    while(fin>>word){
       // std::cout<<"hello"<<std::endl;
        for(auto is_size_in_range:predicates){
            if(is_size_in_range(word)){
                ++countTable[is_size_in_range.upper_limit()];
            }
        }
    }
    for(auto p:countTable){
        std::cout<<"count in range[1,"<<p.first<<"]:"<<p.second<<std::endl;
    }
    return 0;
}