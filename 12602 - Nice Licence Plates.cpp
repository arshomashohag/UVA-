#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>

using namespace std;

int main(void)
{
    int t, a, b, temp, i;
    char ar[20], ch;

    scanf("%d",&t);
    while(t--)
    {
        getchar();
        scanf("%[^\n]",ar);
        a = 0;
        a =((ar[2]-65)*1) + ((ar[1]-65)*26)+((ar[0]-65)*676);
        b = (ar[4]-48);
        b = b*10 +(ar[5]-48);
        b = b*10 + (ar[6]-48);
        b= b*10 + (ar[7]-48);


        temp = abs(a-b);

        if(temp<=100)
            printf("nice\n");
        else
            printf("not nice\n");

    }

    return 0;
}
