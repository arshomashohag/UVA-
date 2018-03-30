#include<stdio.h>


int leap_y,hulu,bulu,ck=0;
char  year[10000];

int div(int b)
{
    int temp=0;
    long long int i;
    for(i=0; year[i]; i++)
    {
        temp=temp*10+(year[i]-48);
        if(temp>=b)
        {
            temp=temp%b;
        }
    }

   return temp;
}


int main(void)
{

    while(scanf("%s",year)==1)
    {
        leap_y=0;
        hulu=0;
        bulu=0;
         printf("\n");
        if((!(div(4)) && (div(100))) || !(div(400)))
        {
            leap_y=1;
            printf("This is leap year.\n");
        }
        if(!(div(15)))
        {
            hulu=1;
            printf("This is huluculu festival year.\n");
        }
        if(!(div(55))&& leap_y)
        {
            bulu=1;
            printf("This is bulukulu festival year.\n");
        }

        if(!leap_y && !hulu && !bulu)
            printf("This is an ordinary year.\n");

            getchar();
        ck=1;
    }


    return 0;
}
