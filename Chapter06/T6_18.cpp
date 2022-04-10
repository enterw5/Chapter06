/*FileName:T6_18.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to calculate the power*/
#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{
    int a=1;
    for(int i=1;i<=exponent;i++)
        a*=base;
    return a;
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout<<integerPower(base,exponent);
    return 0;
}
