/*FileName:T6_33.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to flip a coin*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int flip()
{
    unsigned int num1=0+rand()%2;
    return num1;
}
int main()
{
    unsigned int frequency1=0;
    unsigned int frequency2=0;
    unsigned int s=0;
    unsigned int result;
    for(int i=1;i<=100;i++)
    {

        result=flip();
        s++;
        if(result==0)
            {frequency1++;
             cout<<"Tail";}
        else {frequency2++;
            cout<<"Head";}
            if(s==5)
            {
                cout<<endl;
                s=0;
            }
    }
    cout<<"Head"<<"\t"<<frequency2<<endl;
    cout<<"Tail"<<"\t"<<frequency1<<endl;
    return 0;
}
