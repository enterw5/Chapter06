/*FileName:T6_12.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: caculte parking fees for three customers */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double caculateCharges(double t);
int main()
{

    cout<<"Car"<<setw(13)<<"Hours"<<setw(13)<<"Charges"<<endl;
    double t1,t,sum1,sum,t2;
    sum=0.00;t2=0.0;
    for(int i=1;i<=3;i++)
    {

    cin>>t1;
    t=ceil(t1);
    cout<<i<<setw(13)<<fixed<<setprecision(1)<<t1<<setw(13)<<setprecision(2)<<caculateCharges(t)<<endl;
    t2+=t1;
    sum1=caculateCharges(t);
    sum+=sum1;
    }
    cout<<"TOTAL"<<setw(9)<<fixed<<setprecision(1)<<t2<<setw(13)<<setprecision(2)<<sum;
    return 0;
}
double caculateCharges(double t)
{
    double sum1;
    if(t<=3)
            sum1=2.00;
    else if(t>19)
        sum1=10.00;
    else
        sum1=0.5*(t-3)+2.00;
       return sum1;

}
