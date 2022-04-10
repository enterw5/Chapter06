/*FileName:T6_28.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: construct a function to judge whether the sum of a number and its factor is equal*/
#include <iostream>

using namespace std;

int isperfect(int number)
{
    int sum=0;
    for(int i=1;i<number;i++)
        {
            if(number%i==0)
            sum+=i;
        }
    if(sum==number)
        {
            cout<<number<<",";
          for(int i=1;i<number;i++)
            {if(number%i==0)
                cout<<i<<" ";}
                cout<<endl;
        }


}
int main()
{
    for(int number=1;number<=1000;number++)
    {
        if(number==1)
        cout<<"1,1"<<endl;
        isperfect(number);

    }
    return 0;
}
