#include<iostream>
#include<string>
using namespace std;
int main(){
    char ch;
    int vowelCount=0;
    while(cin>>ch){
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
        }
        cout<<vowelCount<<endl;
    }
    return 0;
}