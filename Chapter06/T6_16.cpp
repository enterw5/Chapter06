 /*FileName:T6_16.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: assign a random integer to the variable n*/
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    //a
    unsigned int n=1+rand()%2;
    //b
    unsigned int n1=1+rand()%100;
    //c
    unsigned int n2=0+rand()%10;
    //d
    unsigned int n3=1000+rand()%112;
    //e
    int n4=-1+rand()%2;
    //f
    int n5=-3+rand()%14;
    return 0;
}
