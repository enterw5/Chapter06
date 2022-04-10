/*FileName:T6_21.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to judge whether it is an even number*/
#include <iostream>

using namespace std;

int iseven(int i)
{
    if(i%2==0)
        cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
int main()
{
    int i;
    do
    {
        cin>>i;
        iseven(i);
    }
    while(i!=9);
    return 0;
}
