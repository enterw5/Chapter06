/*FileName:T6_40.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:recursive visualization*/
#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long);
int main()
{

    for(unsigned int counter=0;counter<=10;++counter)
    {
       for(int i=0;i<=counter;++i)
        cout<<"   ";
        cout<<setw(2)<<counter<<"!="<<factorial(counter)<<endl;
    }
    return 0;
}
unsigned long factorial(unsigned long number)
{
    if(number<=1)
      return 1;
    else
    {
        return number*factorial(number-1);

    }
}
