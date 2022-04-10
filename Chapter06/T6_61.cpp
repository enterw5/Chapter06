/*FileName:T6_59.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function:choose type to answer questions*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int creatNumber(int&product,int select,int select1)
{
    unsigned int die1=1+rand()%(9+(select-1)*10);
    unsigned int die2=1+rand()%(9+(select-1)*10);
    switch(select1)
    {
        case 1: cout<<"How much is "<<die1<<" plus "<<die2<<" ?"<<endl;
                product=die1+die2;break;
        case 2: cout<<"How much is "<<die1<<" reduce "<<die2<<" ?"<<endl;
                 product=die1-die2;break;
        case 3: cout<<"How much is "<<die1<<" times "<<die2<<" ?"<<endl;
                  product=die1*die2;break;
        case 4: cout<<"How much is "<<die1<<" except "<<die2<<" ?"<<endl;
                 product=die1/die2;break;
        case 5:
                 unsigned int die3=1+rand()%4;
                 switch(die3)
                 {
                     case 1:cout<<"How much is "<<die1<<" plus "<<die2<<" ?"<<endl;
                             product=die1+die2;break;
                     case 2: cout<<"How much is "<<die1<<" reduce "<<die2<<" ?"<<endl;
                             product=die1-die2;break;
                     case 3:cout<<"How much is "<<die1<<" times "<<die2<<" ?"<<endl;
                            product=die1*die2;break;
                     case 4:cout<<"How much is "<<die1<<" except "<<die2<<" ?"<<endl;
                            product=die1/die2;break;
                     default: break;
                 }


    }

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
    while(1)
    {cout<<"Please input 1 to easy,or 2 to difficult."<<endl;
    int select;
    cin>>select;
    cout<<"Please input 1 to plus, 2 to reduce,3 to times ,4 to except or 5 to blend."<<endl;
    int select1;
    cin>>select1;
    creatNumber(product1,select,select1);
    int s=0;
    int i=0;
    int n=0;
    int result;
    while(s<10)
    {
        cin>>result;
        if(product1==result)
    {
        creatNumber2();
        if(s!=9)
        creatNumber(product1,select,select1);
        i++;
    }
    else
    {
        creatNumber3();

        n++;
    }
    s++;
    }
    cout<<1.00*i/10*100<<"%"<<endl;
    if(1.00*i/10>=0.75)
        cout<<"Congratulations,you are ready to go to the next level!"<<endl;
    else cout<<"Please ask your teacher for extra help."<<endl;
    }


    return 0;
}
