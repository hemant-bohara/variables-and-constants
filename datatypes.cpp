#include <iostream>
using namespace std;

int main() {
    unsigned short ushort_int = 56;
    signed short signed_short = -6;
    int a = 98876789;
    long int long_int = 456789;
    long long int ll_int = 4567645633789;


    cout<<"Size of short int"<<sizeof(short int)<<endl;
    cout<<"Size of int"<<sizeof(int)<<endl;
    cout<<"Size of long"<<sizeof(long)<<endl;
    cout<<"Size of long long"<<sizeof(long long)<<endl;


    cout<<"Unsigned short int:"<<ushort_int<<endl;
    cout<<"signed short int:"<<signed_short<<endl;
    cout<<"long int:"<<long_int<<endl;
    cout<<"long long int value:"<<ll_int<<endl;
    cout<<a<<endl;
    return 0;
}