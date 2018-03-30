#include<bits/stdc++.h>
#define lld long long int

using namespace std;

char chk[]="OIZEASGTBP";

int main(void)
{
lld t, i, s;
    char in[100];
   char ch;
   scanf("%lld",&t);
getchar();
   while(t--)
   {

     while(gets(in))
     {
         if((s=strlen(in))==0 )
            break;

       for(i=0; i<s; i++)
       {
           if(isdigit(ch=in[i]))
            printf("%c",chk[ch-48]);
           else
            printf("%c",ch);
       }
       printf("\n");
     }

     if(t>0)
        printf("\n");

   }


    return 0;
}
