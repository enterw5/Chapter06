/*FileName:T6_29.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to judge whether the number is a prime*/
#include <iostream>
#include <cmath>
using namespace std;

void prime(int number)
{
    int s=1;
    for(int i=2;i<ceil(number/2.0);i++)
        {if(number%i!=0)
            s++;}
        if(s==number/2)
            cout<<number<<" ";
}
void prime1(int number)
{
    int s=1;
    for(int i=2;i<sqrt(number);i++)
        {if(number%i!=0)
            s++;}
        if(s==sqrt(number))
            cout<<number<<" ";
}
int main()
{
    for(int number=2;number<=10000;number++)
            prime(number);

    return 0;
}
