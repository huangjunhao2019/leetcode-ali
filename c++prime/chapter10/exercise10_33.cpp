#include<iostream>
#include<iterator>
#include<algorithm>
#include<fstream>
using namespace std;
int main(int argc,char **argv){
    if(argc!=4){
        return -1;
    }
    ifstream ifs(argv[1]);
    ofstream ofs_odd(argv[2]),ofs_even(argv[3]);

    istream_iterator<int> in(ifs),in_eof;
    ostream_iterator<int> out_odd(ofs_odd," "),out_even(ofs_even,"\n");

    while(in!=in_eof){
        int val=*in;
        if(val%2==0){
            *out_even=val;
            out_even++;
        }
        else{
            *out_odd=val;
            out_odd++;
        }
        in++;
    }
    return 0;
}