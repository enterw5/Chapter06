/*FileName:T6_30.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to reverse a number*/
#include <iostream>

using namespace std;

void reverseNumber(int a)
{
    int b;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        cout<<b;
    }
}
int main()
{
    int a;
    cin>>a;
    reverseNumber(a);
    return 0;
}
