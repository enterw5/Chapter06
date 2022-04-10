/*FileName:T6_20.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to judge whether the second number is a multiple of the first number*/
#include <iostream>

using namespace std;

int multiple(int a,int b)
{

    if(b%a==0)
    cout<<"true"<<endl;
    else cout<<"false"<<endl;

}
int main()
{
    int a,b;
    cout<<"Please enter 1 to do or 0 to exit"<<endl;
    int choice;
    cin>>choice;
    while(choice)
    {
    cout<<"Please enter two numbers"<<endl;
    cin>>a>>b;
    multiple(a,b);
    cout<<"Please enter 1 to do or 0 to exit"<<endl;
    cin>>choice;
    }
    return 0;
}
