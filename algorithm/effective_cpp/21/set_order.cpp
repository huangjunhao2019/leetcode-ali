#include<iostream>
#include<set>
using namespace std;
/*
*   set里面用的比较必须保证相同时，是返回false，这个例子，两个10都嵌入了set，set失去了去重的特性
*/
int main(){
    set<int,less_equal<int>> s;
    s.insert(10);
    s.insert(10);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}