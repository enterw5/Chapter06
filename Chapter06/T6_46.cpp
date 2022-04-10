/*FileName:T6_46.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:practice database functions*/
#include <iostream>
#include <cmath>

using namespace std;

double ceil1(double x1)
{
    return ceil(x1);
}
double cos1(double x2)
{
    return cos(x2);
}
double exp1(double x3)
{
    return exp(x3);
}
double fabs1(double x4)
{
    return fabs(x4);
}
double floor1(double x5)
{
    return floor(x5);
}
double fmod1(double x6,double x14)
{
    return fmod(x6,x14);
}
double log1(double x7)
{
    return log(x7);
}
double log101(double x8)
{
    return log10(x8);
}
double pow1(double x9,double x10)
{
    return pow(x9,x10);
}
double sin1(double x11)
{
    return sin(x11);
}
double sqrt1(double x12)
{
    return sqrt(x12);
}
double tan1(double x13)
{
    return tan(x13);
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"ceil\t"<<ceil1(m)<<endl;
    cout<<"cos\t"<<cos1(m)<<endl;
    cout<<"exp\t"<<exp1(m)<<endl;
    cout<<"fabs\t"<<fabs1(m)<<endl;
    cout<<"floor\t"<<floor1(m)<<endl;
    cout<<"fmod\t"<<fmod1(m,n)<<endl;
    cout<<"log\t"<<log1(m)<<endl;
    cout<<"log10\t"<<log101(m)<<endl;
    cout<<"pow\t"<<pow1(m,n)<<endl;
    cout<<"sin\t"<<sin1(m)<<endl;
    cout<<"sqrt\t"<<sqrt1(m)<<endl;
    cout<<"tan\t"<<tan1(m)<<endl;
    return 0;
}
