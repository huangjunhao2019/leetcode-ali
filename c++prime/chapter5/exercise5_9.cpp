#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int vowel=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel++;
            }
        }
        cout<<vowel<<endl;
    }
    return 0;
}