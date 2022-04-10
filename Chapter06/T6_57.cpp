/*FileName:T6_57.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function:caculate the product of two one bit positive integers*/
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
        cout<<"Very good!"<<endl;
        creatNumber(product1);
        cin>>result;
    }
    else
    {
        cout<<"No.Please try again."<<endl;
        cin>>result;
    }
    }
    return 0;
}
