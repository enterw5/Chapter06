/*FileName:T6_27.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to judge the smallest of the three numbers */
#include <iostream>

using namespace std;

void getMin(double a,double b,double c)
{
    if(a<b)
        if(c<a)
        cout<<c;
        else cout<<a;
    else if(c<b)
       cout<<c;
    else cout<<b;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    getMin(a,b,c);
    return 0;
}
