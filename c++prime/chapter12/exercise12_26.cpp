#include<iostream>
#include<string>
#include<memory>
void solve(int n){
    std::allocator<std::string> alloc;
    auto const p=alloc.allocate(n);
    auto q=p;
    std::string s;
    while(q!=p+n && std::cin>>s){
        alloc.construct(q++,s);
    }
    while(q!=p){
        std::cout<<*(--q)<<" ";
        alloc.destroy(q);
    }
    alloc.deallocate(p,n);
}
int main(){
    solve(5);
    return 0;
}