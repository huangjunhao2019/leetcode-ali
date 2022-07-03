#ifndef QUERY_BASE
#define QUERY_BASE
#include<string>
#include"textquery.h"
class Query_base{
    friend class Query;
protected:
    using line_no=TextQuery::line_no;
    virtual ~Query_base()=default;
private:
    virtual QueryResult eval(const TextQuery &) const =0;
    virtual string rep() const=0;
};
#endif