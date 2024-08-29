// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     float f = 3456.123f;
//     double d = 9.123456789;
//     long double ld = 999.123456789L;
//     cout<<setprecision(4);

//     cout<<"Size of float: "<< sizeof(float)<<endl;
//     cout<<"Size of double: "<< sizeof(double)<<endl;
//     cout<<"Size of long double: "<< sizeof(long double)<<endl;

//     cout<<"float f: "<<f<<endl;
//     cout<<"double d: "<<d<<endl;
//     cout<<"long double: "<<ld<<endl;
// }


#include <iostream>
using namespace std;

int main()
{
    wchar_t ch = L'a';
    wcout<<ch<<endl;
    wcout<<sizeof(wchar_t)<<endl;
}