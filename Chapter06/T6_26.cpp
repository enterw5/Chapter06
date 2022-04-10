/*FileName:T6_26.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to convert fahrenheit and celsius*/
#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double f)
{
    double c;
    c=(f-32)/1.8;
    cout<<fixed<<setprecision(1)<<c<<"\t";
}
double fahrenheit(double c)
{
    double f;
    f=32+c*1.8;
    cout<<fixed<<setprecision(1)<<f<<"\t";
}
int main()
{
    int s=1;
    int t=1;
    for(int f=0;f<=100;f++)
    {
        cout<<f<<"\t";
        celsius(f);
        s++;
        if(s==5)
        {
            cout<<endl;
            s=1;
        }
    }
    cout<<endl;
    for(int c=32;c<=212;c++)
    {
        cout<<c<<"\t";
        fahrenheit(c);
        t++;
        if(t==5)
        {
            cout<<endl;
            t=1;
        }
    }
    return 0;
}
