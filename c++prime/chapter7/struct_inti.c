#include<stdio.h>
#include<string.h>
struct Person{
    int no;
    int age;
};
int main(){
    struct Person huang;
    huang.no=123;
    huang.age=456;
    printf("%d %d\n",huang.no,huang.age);
    return 0;
}