/*FileName:T6_45.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:calculate a*b*/
#include <iostream>

using namespace std;

int mystery(int ,int);
int main()
{
    int x=0;
    int y=0;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    cout<<"The result is "<<mystery(x,y)<<endl;
    return 0;
}
int mystery(int a,int b)
{
    if(1==b||-1==b)
        return a;
    else
        {if(b<0)
        return -a-mystery(a,b+1);
    else
        {if(b==0)
        return 0;
    else return a+mystery(a,b-1);}}
}
