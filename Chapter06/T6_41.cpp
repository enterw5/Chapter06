/*FileName:T6_41.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:use recursion to find the maximum common divisor*/
#include <iostream>

using namespace std;

int gcd(int x,int y)
{
    int m;
    if(y>x)
    {
        m=x;
        x=y;
        y=m;
    }
    if(y==0)
        return x;
    else return gcd(y,x%y);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);


    return 0;
}
