#include<iostream>
#include<string>
using namespace std;
int main(){
    string numbers("0123456789");
    string name("r2d3");
    string::size_type pos=0;
    while(true){
        pos=name.find_first_of(numbers,pos);
        if(pos==string::npos){
            break;
        }
        else{
            cout<<"found number at index: "<<pos<<" element is "<<name[pos]<<endl;
        }
        ++pos;
    }
    return 0;
}