#ifndef NOTQUERY
#define NOTQUERY
#include<memory>
#include<string>
#include"query.h"
#include"query_base.h"
class QueryResult;
class TextQuery;
class NotQuery:public Query_base{
    friend Query operator~(const Query&);
    NotQuery(const Query &q):query(q){}
    string rep() const{
        return "~("+query.rep()+")";
    }
    QueryResult eval(const TextQuery&) const;
    Query query;
};
inline Query operator~(const Query &operand){
    return shared_ptr<Query_base>(new NotQuery(operand));
}
#endif