#include<iostream>
using namespace std;
int main(){
    cout<<"How long do you want the string?"<<endl;
    int size{0};
    cin>>size;
    char *input=new char[size+1]();
    cin.ignore();//大一的时候遇到过，输入的\n被当做下面的input了
    cout<<"input the string: ";
    cin.get(input,size+1);
    cout<<input<<endl;
    delete [] input;
    return 0;
}