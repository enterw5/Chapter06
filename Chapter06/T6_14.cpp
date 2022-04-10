 /*FileName:T6_14.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: caculate the closest number and the nearest tenths,percentiles and thousandths*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double roundToInteger(double x);
double roundToTenths(double x);
double roundToHundredths(double x);
double roundToThousands(double x);
int main()
{
    double x;
    cin>>x;
    cout<<x<<setw(20)<<roundToInteger(x)<<setw(20)<<fixed<<setprecision(1)<<roundToTenths(x)<<setw(20)<<setprecision(2)<<roundToHundredths(x)<<setw(20)<<setprecision(3)<<roundToThousands(x)<<endl;
    return 0;
}
double roundToInteger(double x)
{
    int y;
    y=floor(x+0.5);
    return y;
}
double roundToTenths(double x)
{
    double y;
    y=floor(x*10+0.5)/10;
    return y;
}
double roundToHundredths(double x)
{
   double y;
    y=floor(x*100+0.5)/100;
    return y;
}

double roundToThousands(double x)
{
    double y;
    y=floor(x*1000+0.5)/1000;
    return y;
}

