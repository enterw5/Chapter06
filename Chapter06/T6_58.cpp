/*FileName:T6_58.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function:modify the answer of program transformation result*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int creatNumber(int&product)
{
    unsigned int die1=1+rand()%9;
    unsigned int die2=1+rand()%9;
    cout<<"How much is "<<die1<<" times "<<die2<<" ?"<<endl;
     product=die1*die2;
}
int creatNumber2()
{
    unsigned int m=1+rand()%4;
    switch(m)
    {
        case 1:cout<<"Very good!"<<endl;break;
        case 2:cout<<"Excellent!"<<endl;break;
        case 3:cout<<"Nice work!"<<endl;break;
        case 4:cout<<"Keep up the good work!"<<endl;break;
        default :break;
    }
}
int creatNumber3()
{
    unsigned int m=1+rand()%4;
    switch(m)
    {
        case 1:cout<<"No.Please try again."<<endl;break;
        case 2:cout<<"Wrong.Try once more"<<endl;break;
        case 3:cout<<"Don't give up!"<<endl;break;
        case 4:cout<<"No.Keep trying."<<endl;break;
        default :break;
    }
}
int main()
{
    int product1;
     int &product=product1;
    srand(static_cast<unsigned int>(time(0)));
    creatNumber(product1);

    int result;
    cin>>result;
    while(1)
    {
        if(product1==result)
    {
        creatNumber2();
        creatNumber(product1);
        cin>>result;
    }
    else
    {
        creatNumber3();
        cin>>result;
    }
    }
    return 0;
}
