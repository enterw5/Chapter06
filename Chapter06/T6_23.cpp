/*FileName:T6_23.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to use the characters and side entered display a square*/
#include <iostream>

using namespace std;


int square(int side,char ch)
{
    for(int m=1;m<=side;m++)
    {
        for(int n=1;n<=side;n++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}
int main()
{
    int side;
    cin>>side;
    char ch;
    cin>>ch;
    square(side,ch);
    return 0;
}
