/*FileName:T6_32.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to show grade point*/
#include <iostream>

using namespace std;

void qualityPoints(int a)
{
    if(a>=90&&a<=100)
        cout<<"4";
    else if(a>=80&&a<=89)
        cout<<"3";
    else if(a>=70&&a<=79)
        cout<<"2";
    else if(a>=60&&a<=69)
        cout<<"1";
    else cout<<"0";
}
int main()
{
    int a;
    cin>>a;
    qualityPoints(a);
    return 0;
}
