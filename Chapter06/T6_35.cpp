/*FileName:T6_35.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: count the number of word guessing games*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int seed=0;
    cin>>seed;
    srand(seed);
    unsigned int a=1+rand()%1000;
    int m=0;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess."<<endl;
    int guess;
    cin>>guess;
    while(guess!=a)
    {
        m++;
        if(guess>a)
            {
                cout<<"Too high.Try again."<<endl;
            }
            else cout<<"Too low.Try again."<<endl;
            cin>>guess;
    }
    cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)?"<<endl;
    if(m==10)
    {
        cout<<"Ahah!You kown the secret!"<<endl;
    }
    else if(m<10)
        cout<<"Either you kown the secret or you got lucky!"<<endl;
    else cout<<"You should be able to do better!"<<endl;
    return 0;
}
