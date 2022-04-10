/*FileName:T6_13.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: caculate the closest number */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout<<"number"<<setw(10)<<"before"<<setw(10)<<"after"<<endl;
    double x;
    int y;
    for(int i=1;i<=5;i++)
    {
    cin>>x;
    y=floor(x+0.5);
    cout<<i<<setw(10)<<x<<setw(10)<<y<<endl;
    }
    return 0;
}
