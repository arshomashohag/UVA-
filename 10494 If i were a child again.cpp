#include<cstdio>
#include<cstring>

long long int b,out,i,j,temp,car,dig,l;
char a[1000000],div[1000000];

char ch;


int main(void)
{

  while(scanf("%s %c %lld",a,&ch,&b)==3)
  {
   j=0;
   temp=0;
   l=strlen(a);
   car=1;
   for(i=0;i<l;i++)
       {
         temp=temp*10+(a[i] -48);
          if(temp>=b)
           {
               dig=temp/b;
                div[j++]=dig+48;
               temp=temp%b;
               car=0;
           }
           else if(car==0)
            {
             div[j++]='0';
            }
        }

       if(car)
       {
           div[j]='0' ;
           div[j+1]='\0' ;
       }
       else
       {
           div[j]='\0';
       }

   if(ch=='/')
     {
       printf("%s\n",div);
     }
   else if(ch=='%')
    printf("%lld\n",temp);

  getchar();
  }

  return 0;

}
