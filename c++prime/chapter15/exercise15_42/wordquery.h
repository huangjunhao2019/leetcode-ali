#ifndef WORDQUERY
#define WORDQUERY
#include<string>
#include"query_base.h"
#include"queryresult.h"
#include"textquery.h"
class WordQuery:public Query_base{
    friend class Query;
    std::string query_word;
    WordQuery(const string &s):query_word(s){}
    QueryResult eval(const TextQuery &t) const{
        return t.query(query_word);
    }
    string rep() const{
        return query_word;
    }
};
#endif