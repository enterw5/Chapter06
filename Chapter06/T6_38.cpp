/*FileName:T6_38.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Apr. 9,2022
Function: solve Hanoi Tower problem with recursion*/
#include <iostream>

using namespace std;


int hannot(int n,int a,int b,int c)//����������ʼ����λ�ã����շ���λ�ã���ʱ��ŵ�
{
    if(n==1)
    {
        cout<<a<<"��"<<b<<endl;
        return 0;
    }
    else
    {
        hannot(n-1,a,c,b);
        cout<<a<<"��"<<b<<endl;
        hannot(n-1,c,b,a);
    }
}
int main()
{
     int n;
     cin>>n;
     hannot(n,1,3,2);
    return 0;
}
