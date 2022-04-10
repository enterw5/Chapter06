/*FileName:T6_52.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function:use the function template to calculate the minimum value of two numbers*/
#include <iostream>

using namespace std;

template < typename T>
T minimum(T value1,T value2)
{
    T minimumvalue=value1;
    if(value2<minimumvalue)
        minimumvalue=value2;
    return minimumvalue;
}
int main()
{
    int int1,int2;
    cout<<"Input two integer values: ";
    cin>>int1>>int2;
    cout<<"The minimum integersvalue is: "<<minimum(int1,int2)<<endl;

    double double1,double2;
    cout<<"Input two double values: ";
    cin>>double1>>double2;
    cout<<"The minimum integersvalue is: "<<minimum(double1,double2)<<endl;

    char char1,char2;
    cout<<"Input two character values: ";
    cin>>char1>>char2;
    cout<<"The minimum integersvalue is: "<<minimum(char1,char2);
    return 0;
}
