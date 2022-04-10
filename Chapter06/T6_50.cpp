/*FileName:T6_50.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: passing by value and by reference triples a number*/
#include <iostream>

using namespace std;

int tripleByValue(int count)
{
    return 3*count;
}
int tripleByReference(int &count)
{
    return 3*count;
}
int main()
{
   int count;
   cin>>count;
   cout<<tripleByValue(count)<<endl;
   cout<<tripleByReference(count)<<endl;
    return 0;
}
