#include<iostream>
#include<memory>
#include<string>
using namespace std;
struct connection{
    string ip;
    int port;
    connection(string ip,int p):ip(ip),port(p){}
};
struct destination{
    string ip;
    int port;
    destination(string ip,int p):ip(ip),port(p){}
};
connection connect(destination *pDest){
    shared_ptr<connection> pConn(new connection(pDest->ip,pDest->port));
    cout<<"creating connection("<<pConn.use_count()<<")"<<endl;
    return *pConn;
}
void disconnect(connection pConn){
    cout<<"connection clse("<<pConn.ip<<":"<<pConn.port<<")"<<endl;
}
void end_connection(connection *pConn){
    disconnect(*pConn);
}
void f(destination &d){
    connection conn=connect(&d);
    shared_ptr<connection> p(&conn,end_connection);
    cout<<"connecting now("<<p.use_count()<<")"<<endl;
}
int main(){
    destination dest("192.168.1.121",10080);
    f(dest);

    return 0;
}
