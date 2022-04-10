/*FileName:T6_19.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to calculate the hypotenuse of a right triangle*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int hypotenuse(double side1,double side2)
{
    double side3;
    double i;
    i=pow(side1,2)+pow(side2,2);
    side3=sqrt(i);
    return side3;
}
int main()
{

    cout<<"triangle"<<setw(13)<<"side1"<<setw(13)<<"side2"<<setw(13)<<"side3";
    for(int m=1;m<=3;m++)
    {
        double side1,side2;
        cin>>side1>>side2;
        cout<<m<<setw(15)<<side1<<setw(15)<<side2<<setw(15)<<hypotenuse(side1,side2)<<endl;
    }

    return 0;
}
