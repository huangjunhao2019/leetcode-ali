#ifndef EXERCISE12_2
#define EXERCISE12_2
#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
#include<exception>
using std::vector;
using std::string;
using size_type=vector<string>::size_type;
class StrBlob{
private:
    std::shared_ptr<vector<string>> data;
    void check(vector<string>::size_type i,const string &msg) const{
        if(i>=data->size()){
            throw std::out_of_range(msg);
        }
    }
public:
    StrBlob():data(std::make_shared<vector<string>>()){}
    StrBlob(std::initializer_list<string> il):data(std::make_shared<vector<string>>(il)){}
    size_type size() const{
        return data->size();
    }
    bool empty() const{
        return data->empty();
    }
    void push_back(const string &t){
        data->push_back(t);
    }
    void pop_back(){
        check(0,"pop_back on empty StrBlob");
        data->pop_back();
    }
    std::string &front(){
        check(0,"front on empty StrBlob");
        return data->front();
    }
    std::string &back(){
        check(0,"back on empty StrBlob");
        return data->back();
    }
    const std::string &front() const{
        check(0,"front on empty StrBlob");
        return data->front();
    }
    const std::string &back() const{
        check(0,"back on empty StrBlob");
        return data->back();
    }
};
#endif