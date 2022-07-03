#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"queryresult.h"
#include"textquery.h"
#include"query.h"
#include"andquery.h"
#include"orquery.h"
#include"notquery.h"
int main(){
    ifstream fin("text.txt");
    TextQuery text(fin);
    auto q=~Query("Alice");

    auto result=q.eval(text);
    print(cout,result);
    cout<<endl;
    print(cout,result,-3,5);
    cout<<endl;
    return 0;
}