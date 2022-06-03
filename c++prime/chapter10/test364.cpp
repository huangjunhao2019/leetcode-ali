#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="FIRST,MIDDLE,LAST";
    auto comma=find(s.cbegin(),s.cend(),',');
    cout<<string(s.cbegin(),comma)<<endl;

    auto rcomma=find(s.crbegin(),s.crend(),',');
    cout<<string(rcomma.base(),s.cend())<<endl;

    return 0;

}