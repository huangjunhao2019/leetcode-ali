#ifndef ORQUERY
#define ORQUERY
#include<memory>
#include"query.h"
#include"binaryquery.h"
class QueryResult;
class TextQuery;
class OrQuery:public BinaryQuery{
    friend Query operator |(const Query&,const Query&);
    OrQuery(const Query &left,const Query &right):BinaryQuery(left,right,"|"){}
    QueryResult eval(const TextQuery&) const;
};
#endif