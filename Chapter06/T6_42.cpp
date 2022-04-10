/*FileName:T6_42.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:find the distance between two points*/
#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1,double x2,double y1,double y2)
{
    double sum;
    sum=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    cout<< sum;
}
int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    distance(x1,x2,y1,y2);
    return 0;
}
