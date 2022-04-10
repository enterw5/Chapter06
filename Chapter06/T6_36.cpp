/*FileName:T6_36.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: using recursive exponentiation*/
#include <iostream>

using namespace std;

unsigned int power(int base,int exponent)
{
    if(exponent==1)
        return base;
    else
        return base*power(base,exponent-1);
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout<<power(base,exponent);
    return 0;
}
