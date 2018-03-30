#include<cstdio>
#include<cstring>

char tape[][20]={"| o   .  o|",
"|  o  .   |",
"| ooo .  o|",
"| ooo .o o|",
"| oo o.  o|",
"| oo  . oo|",
"| oo o. oo|",
"|  o  .   |",
"| oo  . o |",
"| ooo . o |",
"| oo o.ooo|",
"| ooo .ooo|",
"| oo o.oo |",
"|  o  .   |",
"| oo  .oo |",
"| oo o.ooo|",
"| oooo.   |",
"|  o  .   |",
"| oo o. o |",
"| ooo .o o|",
"| oo o.o o|",
"| ooo .   |",
"| ooo . oo|",
"|  o  .   |",
"| oo o.ooo|",
"| ooo .oo |",
"| oo  .o o|",
"| ooo . o |",
"|  o  .   |",
"| ooo .o  |",
"| oo o.   |",
"| oo  .o o|",
"|  o  .   |",
"| oo o.o  |",
"| oo  .  o|",
"| oooo. o |",
"| oooo.  o|",
"|  o  .   |",
"| oo  .o  |",
"| oo o.ooo|",
"| oo  .ooo|",
"|  o o.oo |",
"|    o. o |"};

char out[]={"A quick brown fox jumps over the lazy dog."};
char temp[10000];
char in[20];
int flag=0;
long long int i,j=0,k;
int main(void)
{

     for(i=0;;i++)
     {
           gets(in);
         if(strcmp(in,"___________")==0)
             {
                 if(flag)
                    break;
                 else
                    flag=1;
             }
        else
        for(i=0;i<43;i++)
         {
             if(strcmp(in,tape[i])==0)
                {
                    temp[j++]=out[i];
                    break;
                }
        }
     }
     temp[j]='\0';
     printf("%s",temp);
    return 0;
}
