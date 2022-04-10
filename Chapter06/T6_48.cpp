/*FileName:T6_48.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 10,2022
Function:join the weger to play the double sieve game*/
#include <iostream>

using namespace std;

unsigned int rollDice()
{
    unsigned int die1=1+rand()%6;
    unsigned int die2=1+rand()%6;
    unsigned int sum=die1+die2;
    cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}
int main()
{
    int bankBlance=1000;
    cout<<"Please input wager."<<endl;
    int weger;
    cin>>weger;
    int s=1;
    while(weger>bankBlance)
    {
        cout<<"Please input wager again."<<endl;
        cin>>weger;
    }
   while (s)
    {enum Status{CONTINUE,WON,LOST};
    unsigned int mypoint=0;
    Status gameStatus=CONTINUE;

    unsigned int sumOfDice=rollDice();

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
        sumOfDice=rollDice();
        if(sumOfDice==mypoint)
            gameStatus=WON;
        else if(sumOfDice==7)
            gameStatus=LOST;
    }
    if(WON==gameStatus)
        {
            cout<<"You're up big.Now's the time to cash in your chips!"<<endl;
            bankBlance+=weger;
            cout<<bankBlance<<endl;
        }
    else {
            cout<<"Aw cmon,take a chance!"<<endl;
            bankBlance-=weger;
            cout<<bankBlance<<endl;
            }
            if(bankBlance>0)
              s=1;
            else s=0;
    }
    return 0;
}


