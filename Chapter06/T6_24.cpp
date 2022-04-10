/*FileName:T6_24.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to separate the bits of a number*/
#include <iostream>

using namespace std;

int separate(int i)
{
    int m,b;
    m=0;
    while(i!=0)
    {
        m=m*10+i%10;
        i=i/10;
    }
    while(m!=0)
    {
        b=m%10;
        m=m/10;
        cout<<b<<"   ";
    }
}
int main()
{
       int i;
       cin>>i;
       separate(i);
    return 0;
}
