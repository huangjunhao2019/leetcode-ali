#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//using namespace std;
int main(){
    const char ca[]={'h','e','l','l','o'};
    const char *cp=ca;
    while(*cp){
        printf(*cp);
        ++cp;
    }
    return 0;
}