#include<iostream>
#include<vector>
using namespace std;
string solve(int grade){
    const vector<string> scores={"F","D","C","B","A","A++"};
    string letterGrade="";
    if(grade<60){
        letterGrade=scores[0];
    }
    else{
        letterGrade=scores[(grade-50)/10];
        if(grade==100){
            return letterGrade;
        }
        if(grade%10>=8){
            letterGrade+="+";
        }
        else{
            letterGrade+="-";
        }
    }
    return letterGrade;
}
int main(){
    int grade;
    while(cin>>grade){
        string res=solve(grade);
        cout<<res<<endl;
    }
    return 0;
}