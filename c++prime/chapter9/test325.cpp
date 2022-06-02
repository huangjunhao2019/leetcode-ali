#include<iostream>
#include<string>
using namespace std;
int main(){
    string numbers("0123456789");
    string name("r2d2");
    auto pos=name.find_last_of(numbers);
    cout<<pos<<endl;
    return 0;
}