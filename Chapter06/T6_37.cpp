/*FileName:T6_37.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: write recursive functions without recursion*/
#include <iostream>

using namespace std;

int fibonacci(unsigned int n)
{
    int m1,m2,s,m;
    m1=0;m2=1;s=1;
    if(n==0||n==1)
        cout<<n;
    while(s<n)
    {
        m=m1+m2;
        m1=m2;
        m2=m;
        s++;
    }
    cout<<m;
}
int main()
{
    unsigned int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
