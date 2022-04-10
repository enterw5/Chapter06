/*FileName:T6_25.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to calculate the seconds*/
#include <iostream>

using namespace std;

int judgeSecond(int hour,int minute,int second)
{
    int sum;
    sum=hour*3600+minute*60+second;
    cout<<sum;
}
int main()
{
    int hour,minute,second;
    cin>>hour>>minute>>second;
    judgeSecond(hour,minute,second);
    return 0;
}
