/*FileName:T6_55.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function:use the new random number generator to modify the screen throwing game */
#include <iostream>
#include <random>
#include <ctime>


using namespace std;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));

    uniform_int_distribution<unsigned int> randomInt1(1,6);
    uniform_int_distribution<unsigned int> randomInt2(1,6);
     unsigned int die1= randomInt1(engine);
    unsigned int die2= randomInt2(engine);
    unsigned int sum=die1+die2;
    cout<<"Player rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;

    enum Status{CONTINUE,WON,LOST};
    unsigned int mypoint=0;
    Status gameStatus=CONTINUE;

    unsigned int sumOfDice=sum;

    switch(sumOfDice)
    {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            mypoint = sumOfDice;
            cout<<"Point is "<<mypoint<<endl;
            break;
    }
    while(CONTINUE==gameStatus)
    {
        do
        {

             die1= randomInt1(engine);
             die2= randomInt2(engine);
             sum=die1+die2;
            cout<<"Player rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;
            sumOfDice=sum;

        }
        while(sumOfDice!=mypoint&&sumOfDice!=7);
        if(sumOfDice==mypoint)
            gameStatus=WON;
        else if(sumOfDice==7)
            gameStatus=LOST;
    }
    if(WON==gameStatus)
        cout<<"Player wins"<<endl;
    else cout<<"Player loses"<<endl;
    return 0;
}
