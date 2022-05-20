#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="";
    while(cin>>s){
        int vowel=0;
        for(int i=0;i<s.size();i++){
            switch(s[i]){
                case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
                    vowel++;
                    break;
            }
        }
        cout<<vowel<<endl;
    }
    return 0;
}