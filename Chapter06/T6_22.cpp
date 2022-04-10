/*FileName:T6_22.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to display a square*/
#include <iostream>

using namespace std;

int square(int side)
{
    for(int m=1;m<=side;m++)
    {
        for(int n=1;n<=side;n++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int side;
    cin>>side;
    square(side);
    return 0;
}
