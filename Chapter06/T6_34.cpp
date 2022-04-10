/*FileName:T6_34.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: guess a random number*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int a=1+rand()%1000;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."<<endl;
    int guess;
    cin>>guess;
    while(guess!=a)
    {
        if(guess>a)
            {
                cout<<"Too high.Try again."<<endl;
            }
            else cout<<"Too low.Try again."<<endl;
            cin>>guess;
    }
    cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?"<<endl;
    return 0;
}
