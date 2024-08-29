// Constants are the fixes values that doesn't change during the execution of a program

// Variables are like containers to store a value

/* There are two ways of defining constants:
1. using define keyword in definition section
2. using const keyword: Syntax = (const dataytpe name = value)
*/

// #include <iostream>
// using namespace std;
// #define PI 3.1415;

// int main()
// {
//     const int a = 10;
//     cout << a << endl;
//     cout << PI;
//     // PI = 44;  --> This will give error because constants are fixed values and cannot be changed
//     // cout<< PI;

//     // a = 50; --> This will give error because constants are fixed values and cannot be changed
//     // cout<<a<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    const string str = "Hemant";
    cout << str << endl;
    return 0;
}