#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

char str[30],ch;
int n,i,num,flag;

int main(void)
{

while(gets(str))
{
    i=0;
    num=0;
    while(str[i])
    {
        ch=str[i];
        if(ch>='A' && ch<='Z')
            {
                num=num+(ch-64)+26;
            }
            else
                num=num+(ch-96);
            i++;

    }
    flag=0;
    n=sqrt(num);
    for(i=2;i<=n;i++)
        if(num%i==0)
        {
          flag=1;
          break;
        }
        if(flag)
            printf("It is not a prime word.\n");
        else
            printf("It is a prime word.\n");
}
    return 0;
}
