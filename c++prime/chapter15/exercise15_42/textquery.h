#ifndef TEXTQUERY
#define TEXTQUERY
#include<fstream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<memory>
using namespace std;
class QueryResult;
class TextQuery{
public:
    typedef vector<string>::size_type line_no;
    TextQuery(ifstream&);
    QueryResult query(const string &) const;
private:
    shared_ptr<vector<string>> file;
    map<string,shared_ptr<set<line_no>>> wm;
    shared_ptr<vector<string>> handlePunct(const string &);
};
#endif