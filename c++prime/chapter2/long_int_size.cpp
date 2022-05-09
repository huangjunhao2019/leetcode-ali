#include<iostream>
int main(){
    bool ba=true;
    char ca='a';
    wchar_t wa='a';
    char16_t a16='a';
    char32_t a32='a';
    short sa=2;
    int ia=2;
    long la=2;
    long long lla=2;
    float fa=2;
    double da=2;
    long double lda=2;
    std::cout<<"ba "<<sizeof(ba)<<std::endl;
    std::cout<<"ca "<<sizeof(ca)<<std::endl;
    std::cout<<"wa "<<sizeof(wa)<<std::endl;
    std::cout<<"a16 "<<sizeof(a16)<<std::endl;
    std::cout<<"a32 "<<sizeof(a32)<<std::endl;
    std::cout<<"sa "<<sizeof(sa)<<std::endl;
    std::cout<<"ia "<<sizeof(ia)<<std::endl;
    std::cout<<"la "<<sizeof(la)<<std::endl;
    std::cout<<"lla "<<sizeof(lla)<<std::endl;
    std::cout<<"fa "<<sizeof(fa)<<std::endl;
    std::cout<<"da "<<sizeof(da)<<std::endl;
    std::cout<<"lda "<<sizeof(lda)<<std::endl;
    std::cout<<"ia+lla "<<sizeof(ia+lla)<<std::endl;
    return 0;
}