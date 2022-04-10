/*FileName:T6_31.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to calculate the greatest common divisor of two numbers*/
#include <iostream>

using namespace std;

void gcd(int a,int b)
{
    int tem,s1,s2;
    if(a<b)
        {
            tem=a;
            a=b;
            b=tem;
        }
    while(a%b!=0)
    {
        s1=b;
        s2=a%b;
        if(s1>s2)
            {
                a=s1;
                b=s2;
            }
        else{a=s2;
              b=s1;}

    }
    cout<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
