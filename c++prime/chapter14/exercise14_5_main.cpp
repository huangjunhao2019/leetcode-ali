#include"exercise14_5.h"
int main(){
    Book book1(123,"cp5","Lippman","2012");
    Book book2(123,"cp5","Lippman","2012");
    if(book1==book2){
        std::cout<<book1<<book2<<std::endl;
    }
    return 0;
}