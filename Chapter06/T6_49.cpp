/*FileName:T6_49.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:call the inline function to calculate the circle area*/
#include <iostream>

using namespace std;

inline double circleArea(const double r1)
{
   cout<< 3.14*r1*r1;
}
int main()
{
    double r;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    cout<<"Area of the circle with radius "<<r<<" is ";
    circleArea(r);
    return 0;
}
