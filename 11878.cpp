#include<bits/stdc++.h>
using namespace std;

int main(void){
int a, b, c, out=0;
int chk=-488;
c=chk;
char ch;
char str[20];

 while(gets(str) && strlen(str))
 {

    sscanf(str,"%d%d%*c%d",&a,&b,&c);



     if(str[strlen(str)-1]!='?')
     {
         chk=c;
           if((a+b)==c )
                {
                    out++;
                }

     }
 }
 printf("%d\n",out);

 return 0;

}
