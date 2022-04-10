/*FileName:T6_53.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function:use the function template to calculate the maximum value of two numbers*/
#include <iostream>

using namespace std;

template < typename T>
T maximum(T value1,T value2)
{
    T maximumvalue=value1;
    if(value2>maximumvalue)
        maximumvalue=value2;
    return maximumvalue;
}
int main()
{
    int int1,int2;
    cout<<"Input two integer values: ";
    cin>>int1>>int2;
    cout<<"The minimum integersvalue is: "<<maximum(int1,int2)<<endl;

    double double1,double2;
    cout<<"Input two double values: ";
    cin>>double1>>double2;
    cout<<"The minimum integersvalue is: "<<maximum(double1,double2)<<endl;

    char char1,char2;
    cout<<"Input two character values: ";
    cin>>char1>>char2;
    cout<<"The minimum integersvalue is: "<<maximum(char1,char2);
    return 0;
}

