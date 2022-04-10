 /*FileName:T6_17.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: randomly print out the number in the array*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int firstArray (int i)
{
    int r;
    int arr1[5]={2,4,6,8,10};
     r=arr1[i];
     return r;
}
int secondArray (int i)
{
    int r;
    int arr2[5]={3,5,7,9,11};
     r=arr2[i];
     return r;
}
int thirdArray (int i)
{
    int r;
    int arr3[5]={6,10,14,18,22};
     r=arr3[i];
     return r;
}
int main()
{

    unsigned seed=0;
    cin>>seed;
    srand(seed);
     int i;
    cout<<"i"<<setw(20)<<"firstArray"<<setw(20)<<"secondArray"<<setw(20)<< "thirdArray "<<endl;
    for(int m=1;m<9;m++)
    {
        i=0+rand()%5;

    cout<<i<<setw(20)<<firstArray(i)<<setw(20)<<secondArray (i)<<setw(20)<< thirdArray (i);
    cout<<endl;
    }
    return 0;
}
